#include <bits/stdc++.h>
using namespace std;
int find(int n) 
{  
    int count = 0; 
    for (int i = 5; n / i >= 1; i *= 5) count += n / i; 
    return count; 
}
int main();
void zen(string);
void choice7(){
    string l;
        cin>>l;
        if(l=="normal")
        {
            main();
        }
        else{
            zen(l);
        }
}
void zen(string l){
    int a=0;
    char b;int c;
    cin>>b;
    stringstream k(l);
    k>>a;
    if (b=='!'){
        int ans=1;
        for(int i=1;i<=a;i++){
            ans*=i;
        }
        cout<<endl<<ans<<endl;
    }
    else if(b=='~'){
        int x=a;
        cout<<endl<<find(x)<<endl;
    }
    else
    {
    int c;
    cin>>c;
    if (b=='+')cout<<endl<<a+c<<endl;
    else if(b=='*')cout<<endl<<a*c<<endl;
    else if(b=='/')cout<<endl<<a/c<<endl;
    else if(b=='-')cout<<endl<<a-b<<endl;

    choice7();
    }
}

int main(){
    int choice;
    cout<<endl<<endl;
    cout<<"-----------------------------------------------------------------------------";
    cout<<endl;
    cout<<" 1.Add 2 numbers"<<endl<<" 2.Subtract 2 numbers"<<endl<<" 3.Multiply 2 numbers"<<endl<<" 4.Divide 2 numbers"<<endl<<" 5.Factorial of a number"<<endl<<" 6.Number of zeros in a factorial"<<endl<<" 7.Use zen mode (to exit type 'normal' and enter) in zen use '~' to work"<<endl<<"---Anything else to exit---"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    if (choice>=1 && choice<=4)
    {
        cout<<"\nEnter 2 numbers:";
        int a,b;
        cin>>a>>b;
    if(choice==1)
    {
        cout<<endl<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
    else if(choice==2)
    {
        cout<<endl<<a<<" - "<<b<<" = "<<a-b<<endl;
    }
    else if(choice==3)
    {
        cout<<endl<<a<<" * "<<b<<" = "<<a*b<<endl;
    }
    else if(choice==4)
    { 
        if (b!=0)cout<<endl<<a<<" / "<<b<<" = "<<a/b<<endl;
        else cout<<endl<<"Division is not possible"<<endl;
    }
    main();
    }

    else if(choice==5){
        int a;
        cout<<"Enter a number: ";
        cin>>a;
        int ans=1;
        for(int i=1;i<=a;i++){
            ans*=i;
        }
        cout<<endl<<a<<"!"<<" = "<<ans<<endl;
        main();
    }
    else if(choice==6){
        int a;
        cout<<"Enter a number: ";
        cin>>a;
        int b=a;
        cout<<endl<<"The number of zeroes in "<<a<<"! is "<<find(b);
        main();
    }

    else if(choice==7)
    {
        choice7();
    }

    else
    {
        cout<<"\n\nThanks for using the calculator\n\n"<<endl;
        exit(0);
    }
    
}