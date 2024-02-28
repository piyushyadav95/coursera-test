#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            cout<<"*";
         }
         cout<<endl;
    }
}

void print2(int n){
    for(int i=0;i<= n;i++){
         for(int j=0;j<i;j++){
            cout<<"*";
         }
         cout<<endl;
    }
}

void print3(int n){
    for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
            cout<<j;
         }
         cout<<endl;
    }
}

void print4(int n){
    for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
            cout<<i;
         }
         cout<<endl;
    }
}

void print5(int n) {
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i+1;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

void print6(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}

void print7(int n) {
    for(int i=1;i<=n;i++ ){
        
        
        //space
        for(int j=1;j<=n-i;j++ ){
            cout<<" ";
        }

        //star
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"*";
        }
        
        //space
        for(int j=1;j<=n-i;j++ ){
            cout<<" ";
            
        }
        cout<<endl;
    }
}

void print8(int n) {
    for(int i=1;i<=n;i++ ){
        
        
        //space
        for(int j=1;j<=i-1;j++ ){
            cout<<" ";
        }

        //star
        for(int j=1;j<=(n*2)-(2*i)+1;j++){
            cout<<"*";
        }
        
        //space
        for(int j=1;j<=i-i;j++ ){
            cout<<" ";
            
        }
        cout<<endl;
    }
}

void print9(int n) {
    for(int i=1;i<=n;i++ ){
        
        
        //space
        for(int j=1;j<=n-i;j++ ){
            cout<<" ";
        }

        //star
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"*";
        }
        
        //space
        for(int j=1;j<=n-i;j++ ){
            cout<<" ";
            
        }
        cout<<endl;
    }


for(int i=1;i<=n;i++ ){
        
        
        //space
        for(int j=1;j<=i-1;j++ ){
            cout<<" ";
        }

        //star
        for(int j=1;j<=(n*2)-(2*i)+1;j++){
            cout<<"*";
        }
        
        //space
        for(int j=1;j<=i-i;j++ ){
            cout<<" ";
            
        }
        cout<<endl;
    }


}

void print10(int n) {
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }



    for (int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
 
void print11(int n) {
    int temp =1;
    for(int i=0;i<n;i++){
         if(i%2==0)
         temp=1;
         else
         temp=0;
        for(int j=0;j<=i;j++){
            cout<<temp<<" ";
            temp=1-temp;
        }
        cout<<endl;
    }
}

void print12(int n) {
   for(int i=1;i<=n;i++){
       
       //Number
          for(int j=1;j<=i;j++){
              cout<<j;
          }


       //space
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }


       //number
       for(int j=i;j>=1;j--){
           cout<<j;
       }
       cout<<endl;
   }
}

void print13(int n) {
    int temp=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }
}

void print14(int n) {
    
    for(int i=1;i<=n;i++){
        for( char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";    
        }
        cout<<endl;
    }
}

void print15(int n) {
    
    for(int i=1;i<=n;i++){
        for( char ch='A';ch<='A'+n-i;ch++){
            cout<<ch<<" ";    
        }
        cout<<endl;
    }
}

void print16(int n) {
    char ch ='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";    
        }
        ch=ch+1;
        cout<<endl;
    }
}

void print17(int n) {
   
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }


        //value
          char ch='A';
          int x=(2*i)/2;
          for(int j=1;j<=2*i-1;j++){
              cout<<ch<<" ";
              if(j<x)
              ch=ch+1;
              else
              ch=ch-1;
          }



        //space
         for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}

void print18(int n) {
    for(int i=1;i<=n;i++){
        char ch ='A';

        for(int j=1;j<=i;j++){
            cout<<(char)(ch+n-j)<<" ";
    
        }
        cout<<endl;
    }

}

int main(){
int t;
cin >>t;
for(int i=0;i<t;i++){
   int n;
   cin >>n;
   print1(n);
}
}
// command + shift + B to run 