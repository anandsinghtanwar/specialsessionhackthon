#include<stdio.h>
#include<math.h>
struct point{
    float a;
    float b;
};
typedef struct point Vertex;

Vertex input()
{
    Vertex p;
    scanf("%f",&p.a);
    scanf("%f",&p.b);
    return p;
    
}

float compute(Vertex p1,Vertex p2,Vertex p3)
{
    float d1,d2,d3;
    float area;
    d1=sqrt((((p2.a)-(p1.a))*((p2.a)-(p1.a)))+(((p2.b)-(p1.b))*((p2.b)-(p1.b))));
    d2=sqrt((((p3.a)-(p1.a))*((p3.a)-(p1.a)))+(((p3.b)-(p1.b))*((p3.b)-(p1.b))));
    d3=sqrt((((p2.a)-(p3.a))*((p2.a)-(p3.a)))+(((p2.b)-(p3.b))*((p2.b)-(p3.b))));
    if (d1>d2 && d1>d3)
    {
        area=(d2*d3);
    }
    else if ( d2>d1 && d2>d3)
    {
        area=(d1*d3);
    }
    else
    {
        area=(d1*d2);
    }
    return area;
    
}

Vertex output(float r,Vertex p1,Vertex p2,Vertex p3)
{
    printf("Area of rectangle with vertices(%0.1f,%0.1f),(%0.1f,%0.1f),(%0.1f,%0.1f) is      %0.1f",p1.a,p1.b,p2.a,p2.b,p3.a,p3.b,r);
}
int main()
{
    int n ;
    float r;
    Vertex p1,p2,p3;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        p1=input();
        p2=input();
        p3=input();
        r=compute(p1,p2,p3);
        output(r,p1,p2,p3);
    }
    
    
}
