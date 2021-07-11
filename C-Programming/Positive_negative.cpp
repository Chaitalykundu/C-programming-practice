#include<iostream>
#include<cstdlib>
#include<cstring>

#define MAX 100000
using namespace std;

int main(){
    int N,i,j,temp,m=0,l=0;
    char V[MAX];
    char B[MAX];
    cin >> V;
    m = strlen(V);
    cin >> N;
    for(i=0;i<N;i++){
        cin>>B;
        l = strlen(B); 
            int k = 0;
            j = 0;
            while(l>k && m>j){
                if(B[k]==V[j]){
                    temp = temp + 1;
                    k++;
                    j++;
                }
                else {
                    j++;
                    temp = 0;
                }
        }
        if (temp == 0) 
			cout<<"NEGATIVE"<<endl;
        else 
			cout<<"POSITIVE" <<endl;
    }
}