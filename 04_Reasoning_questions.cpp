#include <iostream>
#include <cmath>
using namespace std;

void wrong_ans(){
    cout<<endl<<"Wrong answer please try again....."<<endl<<endl;
}
int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int product(int a,int b){
    return a*b;
}
int division(int a,int b){
    return (a/b);
}
int main(){
    int ans,i;

    // Q. 1
    i=0;
    cout<<"Question 1."<<endl<<endl;
    cout<<"25, 55 = "<<sum(25,55)<<endl<<endl;
    cout<<"34, 7 = "<<sum(34,7)<<endl<<endl;
    cout<<"12, 25 = "<<sum(12,25)<<endl<<endl;
    cout<<"31, 45 = ?"<<endl<<endl;
    do{
        if(i>0){
            wrong_ans();
        }
        cout<<"Enter your answer _";
        cin>>ans;
        i++;
    }while(ans != sum(31,45));
    cout<<endl<<"Correct Answer"<<endl<<endl;

    // Q. 2
    i=0;
    cout<<"Question 2."<<endl<<endl;
    cout<<"8, 6 = "<<product(8,6)<<endl<<endl;
    cout<<"14, 6 = "<<product(14,6)<<endl<<endl;
    cout<<"12, 5 = "<<product(12,5)<<endl<<endl;
    cout<<"7, 4 = ?"<<endl<<endl;
    do{
        if(i>0){
            wrong_ans();
        }
        cout<<"Enter your answer _";
        cin>>ans;
        i++;
    }while(ans != product(7,4));
    cout<<endl<<"Correct Answer"<<endl<<endl;

    // Q. 3
    i=0;
    cout<<"Question 3."<<endl<<endl;
    cout<<"8, 6 = "<<product(8,6)-8<<endl<<endl;
    cout<<"18, 6 = "<<product(18,6)-18<<endl<<endl;
    cout<<"12, 2 = "<<product(12,2)-12<<endl<<endl;
    cout<<"3, 22 = ?"<<endl<<endl;
    do{
        if(i>0){
            wrong_ans();
        }
        cout<<"Enter your answer _";
        cin>>ans;
        i++;
    }while(ans != product(3,22)-3);
    
    cout<<endl<<"Correct Answer"<<endl<<endl;
    
    // Q. 4
    i=0;
    cout<<"Question 4."<<endl<<endl;
    cout<<"15, 25 = "<<sum(15,25)+5<<endl<<endl;
    cout<<"58, 12 = "<<sum(58,12)+5<<endl<<endl;
    cout<<"85, 34 = "<<sum(85,34)+5<<endl<<endl;
    cout<<"45, 63 = ?"<<endl<<endl;
    do{
        if(i>0){
            wrong_ans();
        }
        cout<<"Enter your answer _";
        cin>>ans;
        i++;
    }while(ans != sum(45,63)+5);
    
    cout<<endl<<"Correct Answer"<<endl<<endl;

    // Q. 5
    i=0;
    cout<<"Question 5."<<endl<<endl;
    cout<<"37, 12 = "<<sub(37,12)*2<<endl<<endl;
    cout<<"42, 17 = "<<sub(42,17)*2<<endl<<endl;
    cout<<"84, 67 = "<<sub(84,67)*2<<endl<<endl;
    cout<<"23, 4 = ?"<<endl<<endl;
    do{
        if(i>0){
            wrong_ans();
        }
        cout<<"Enter your answer _";
        cin>>ans;
        i++;
    }while(ans != sub(23,4)*2);
    
    cout<<endl<<"Correct Answer"<<endl<<endl;

    // Q. 6
    i=0;
    cout<<"Question 6."<<endl<<endl;
    cout<<"13, 3 = "<<sum(product(13,3),3)<<endl<<endl;
    cout<<"21, 7 = "<<sum(product(21,7),7)<<endl<<endl;
    cout<<"9, 15 = "<<sum(product(9,15),15)<<endl<<endl;
    cout<<"27, 2 = ?"<<endl<<endl;
    do{
        if(i>0){
            wrong_ans();
        }
        cout<<"Enter your answer _";
        cin>>ans;
        i++;
    }while(ans != sum(product(27,2),2));
    
    cout<<endl<<"Correct Answer"<<endl<<endl;

    // Q. 7
    i=0;
    cout<<"Question 7."<<endl<<endl;
    cout<<"28, 14 = "<<pow(sub (28, 14), 2)<<endl<<endl;
    cout<<"92, 86 = "<<pow(sub (92, 86), 2)<<endl<<endl;
    cout<<"48, 33 = "<<pow(sub (48, 33), 2)<<endl<<endl;
    cout<<"35, 24 = ?"<<endl<<endl;
    do{
        if(i>0){
            wrong_ans();
        }
        cout<<"Enter your answer _";
        cin>>ans;
        i++;
    }while(ans != pow(sub (35, 24), 2));
    
    cout<<endl<<"Correct Answer"<<endl<<endl;

    // Q. 8
    i=0;
    cout<<"Question 8."<<endl<<endl;
    cout<<"45, 38 = "<<sub (45, 38)+10<<endl<<endl;
    cout<<"92, 86 = "<<sub (92, 86)+10<<endl<<endl;
    cout<<"63, 19 = "<<sub (63, 19)+10<<endl<<endl;
    cout<<"77, 68 = ?"<<endl<<endl;
    do{
        if(i>0){
            wrong_ans();
        }
        cout<<"Enter your answer _";
        cin>>ans;
        i++;
    }while(ans != sub (77, 68) + 10);
    
    cout<<endl<<"Correct Answer"<<endl<<endl;

    return 0;
}