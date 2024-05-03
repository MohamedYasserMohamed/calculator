#include <iostream>
#include <cmath>
using namespace std;

double add (double num1 , double num2)
{
    return num1+num2;
}
double Minus (double num1 , double num2)
{
    return num1-num2;
}
double multiply (double num1 , double num2)
{
    return (num1*num2);
}
double divide (double num1 , double num2)
{
   return (num1/num2);
}
int  Modulus (int num1 , int num2)
{
   return (num1%num2);
}
double add_three (double num1,double num2,double num3)
{
   return (num1+num2+num3);
}
double minus_three (double num1,double num2,double num3)
{
    return (num1-num2-num3);
}

int main()
{
    while(true)
    {
        int Choice;
        cout << "Choose number of function you need\n1-Add two numbers \n2-minus two numbers\n3-multiply two numbers \n4-divide two numbers \n5-modulus number \n6-Add three number \n7-minus three* numbers \n0-Exit\n" ;
        cout<<"Choice: ";
        cin>>Choice;
        int a,b;

        if(Choice==1)
        {
             cin >>a>>b;
            cout<<add(a,b)
            <<endl;
        }
        else if(Choice==2)
        {
             cin >>a>>b;
            cout<<Minus(a,b)<<endl ;
        }
        else if(Choice==3)
        {
             cin >>a>>b;
            cout <<multiply(a,b)<<endl;
        }
        else if(Choice==4)
        {
             cin >>a>>b;
             if (b==0)
                continue;

            cout <<divide(a,b)<<endl;
        }
        else if(Choice==5)
        {
             cin >>a>>b;
           cout <<Modulus(a,b)<<endl;
        }

        else if(Choice==6)
        {
             cin >>a>>b;
            int c;
         cin >>c;
         cout <<add_three(a,b,c)<<endl;
        }
        else if(Choice==7)
        {
             cin >>a>>b;
         int c;
         cin >>c;
         cout <<minus_three(a,b,c)<<endl;
        }
        else if(Choice==0)
        {
            cout <<"Exit";
            break;
        }
        else
        {
            cout<<"Wrong Choice";
        }
    }
    cout<<endl<<"Thanks for using calculator";
    return 0;
}



/*
int main()
{
    /*
    short Short=5;
    cout <<Short;
    int number=1000000;
    cout<<endl <<number;
    long long sngab=10000000;
    cout<<endl <<sngab;
    float ana=5.5;
    cout <<endl <<ana;
    double m4ana=40000000.5;
    cout <<endl <<m4ana;
    char a='a';
    cout<<endl<<a;
    string mo="mohamed";
    cout<<endl<<mo;
    string Short;
    cin >>Short;
    cout <<Short;

    int length,width;
    cin>>length>>width;
    cout<<length*width;
int num1=18,num2=25;
cout <<num1 <<endl <<num2 <<endl;
int m,a;
cin >>m>>a;
cout <<pow(m,a)<<endl;
float num1,num2,temp;
cin >>num1>>num2;
temp=num1;
num1=num2;
num2=temp;
cout <<num1 <<num2;
cout <<"moahmed"<<endl <<"Chemistry:"<<80<<endl <<"MATH:"<<70<<endl <<"Physics:"<<90;
int num=5;
int num1=5;
float x=10.5;
int my_age=10;
int my,age=10;
int _my_age=20;
int _myage=20;
cout <<"my name is moahmed"<<endl;
cout <<"mi age is"<<20<<endl;
cout <<"my age is"<<20;
int m=5;
int a=10;
cout <<"the first number is m"<<endl;
cout <<"the second number is"<<a<<endl;
m=30;
cout <<m<<endl;
float m,a;
cin >>m>>a;
cout <<m/ a<<endl;
cout <<m+a<<endl;
cout <<m-a<<endl;
cout<<m*a<<'\n';
int z=m;
int d=a;
cout <<z%d<<endl;*/
/*n-=2;
n+=2;
n=n-2;*/
//int n=5;
//n++;
//cout<<n--;

//cout<<--n;
//++n;
/*int age=20;
cout<<age++<<endl;
cout<<++age<<endl;
cout<<--age<<endl;
cout<<age--<<endl;
int m;
cin>> m;
if (m>=50){
cout<< "pass";}
else{
cout <<"fail";
}
int a,m,z;
cin >>a>>m;
cin >>z;
    if (z==1){
    cout<<     a+m;
    }
    if (z==2){
        cout <<a-m;
    }

int num;
cin >>num;
if (num%2==0) {
    cout<< "even"<<endl;
}
    else {
        cout<<"odd"<<endl;
             }
int a,m;
cin >>a>>m;
if(a<m){
    cout <<m;
}
if (a>m){
    cout <<a;
}
else {
    cout <<"aquale";
}
    char m;
    cin>>m;
if (m=='a'){
        cout<<"vowel"<<'\n';
    }
    if (m=='i'){
        cout<<"vowel"<<'\n';
    }
    if (m=='e'){
        cout<<"vowel"<<'\n';
    }
    if (m=='o'){
        cout<<"vowel"<<'\n';
    }
    if (m=='u'){
        cout<<"vowel"<<'\n';
    }
    else {
      cout <<"consonant";
    }
    int num;
    cin >>num;
    if(num%5==0){
        cout <<"divisible \n";
    }
    else {
        cout <<"not divisible";
    }
    string username="Ali";
    if(username=="Ali"){
        cout <<"HELLO, "<<username<<endl;
    }
    cout <<"thank you for using our system";
    string username="Ali";
    if(username=="ali"){
        cout <<"HELLO, "<<username<<'\n';
    }
    cout <<"thank you for using our system";
    int A,B;
    cin >>A>>B;
    if (A+B>=10){
        cout <<"error";
    }
    else {
        cout<<A+B<<'\n';
    }
    int S,W;
    cin >>S>>W;
    if (S>W){
        cout <<"safe";
    }
    else {
        cout <<"unsafe";
    }
    int N,A,B;
    cin>>N>>A>>B;
     if (N*A>B){
    cout <<B;
     }
     else {
        cout<<A*N;
     }
     int x=0;
     while(x<10){

        cout <<++x<<'\n';
     }
     int a=0;

     while(a<10){
        //cout<<a++ <<'\n';
        cout<<++a<<'\n';

     }
      int a;
      int t=1;
     cin >>a;

     while (a){
        t*=a;
        a--;
     }
      cout <<t;*/
     /*
        a*(a-1)*(a-2)*.....1
        5=5*4*3*2*1
        a=5 t=1
        a=4   t=5
       a=3      t=5*4
        a=2      t=5*4*3
        a=1        t=5*4*3*2
        a=0            t=5*4*3*2*1


     //for(int i=1;i<=n;i++){
        //t*=i;
     //}
     int m;
     cin >>m;
     int o=1;
     for (int a=1;a<=m;a++){
        o*=a;
     }
     cout <<o<<endl<<"thank you";
     int a,m;
     cin >>a>>m;
     for(int z=a;z<=m;z++)
     cout <<z<<endl;
     for(int z=0;z<15;z++){
        if (z%2==0){
            continue;
        }
        if(z==7){
            break;
        }
        cout <<z<<endl;
     }
     for(int i=4;i>0;i--){
        for(int m=1;m<=i;m++){
            cout <<"*";
        }
            cout <<endl;
     }
     int n;
     cin>>n;
     int a[n];
     int sum;
     for(int i=0;i<n;i++)
        cin >>a[i];
        sum+=a;
        for(int i=0;i)*/
    /* void sum(int num1)
     {
         int res;
         if(num1==0){
            res=0;
         }
         else if (num1%2!=0){
            res=1;
         }
         else {
            res=2;
         }
         cout<<res;
     }
     int main()
{
    int x;
    cin>>x;
    sum(x);*/
   /* int fact(){
    int x;
    cin>>x;
    int result=1;
    for(int i=1 ; i<=x ; i++)
    {
        result*=i;
    }
    return result;
}
int main()
{
    cout<<fact();

}*/
