/*
За програмски јазик C.

Да се надополни програмата со следните барања:

    да се креира структура на точка во тродимензионален простор и да се напише функција која 
    ќе го пресметува растојанието помеѓу две такви точки.

    да се напише функција која како аргумент прима три точки во дводимензионален простор и 
    ќе проверува дали тие точки лежат на иста права.

*/

#include <stdio.h>
#include <math.h>

typedef struct tocka2D{
    float x;
    float y;
}tocka2D;

typedef struct tocka3D{
    float x;
    float y;
    float z;
}tocka3D;

float rastojanie(tocka2D a, tocka2D b){
    float aa=b.x-a.x;
    float bb=b.y-a.y;
    return sqrt(pow(aa,2)+pow(bb,2));
}

float rastojanie3D(tocka3D a, tocka3D b){
    float aa=b.x-a.x;
    float bb=b.y-a.y;
    float cc=b.z-a.z;
    return sqrt(pow(aa,2)+pow(bb,2)+pow(cc,2));
}

float plostina_na_triagolnik(float a, float b, float c){
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int ista_prava(tocka2D a, tocka2D b, tocka2D c){
    float strana1=rastojanie(a,b);
    float strana2=rastojanie(b,c);
    float strana3=rastojanie(c,a);
    float p=plostina_na_triagolnik(strana1, strana2, strana3);
    if(p==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    float x1, y1, x2, y2;
    scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	tocka2D t1 = { x1, y1 };
	tocka2D t2 = { x2, y2 };
	printf("%.2f\n", rastojanie(t1, t2));
    float z1, z2;
    scanf("%f %f", &z1, &z2);
    tocka3D t3 = {x1, y1, z1};
    tocka3D t4 = {x2, y2, z2};
    printf("%.2f\n", rastojanie3D(t3, t4));
    tocka2D t5 = {z1, z2};
    printf("%d\n", ista_prava(t1, t2, t5));
	return 0;
}