//A. Shout Everyday

#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(b<c){
        if(a>=b && a<c){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }else{
        if(a>=b || a<c) {
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
    return 0;
}

//B. Cut.0
#include<iostream>
using namespace std;
int main(){
    double n;
    cin>>n;
    cout<<n;
    return 0;
}
