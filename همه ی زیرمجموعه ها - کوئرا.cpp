#include <iostream>
using namespace std;
void backtrack(int* p,int* s,int n,int i=0){
    if(i >= n)
        return;
    for(int k=i;k<n;k++){
        if(i>0&&p[k]<=s[i-1])
            continue;
        s[i] = p[k];
        cout<<'{';
        for(int j=0;j<=i;j++){
           if(j==i){
               cout<<s[j]<<'}';
           } else{
              cout<<s[j]<<", ";
           }
        }cout<<endl;
        backtrack(p,s,n,i+1);
    }
}

int main(){
    int n;
    cin>>n;
    int* p = new int[n];
    int* s = new int[n];
    for(int i=0;i<n;i++)
        p[i] = i+1;
    cout<<"{}"<<endl;
    backtrack(p,s,n);
    delete[] p;
    delete[] s;
    return 0;
}
