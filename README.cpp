//# university-problem
#include<iostream>
using namespace std ;
int binarySearch(int a[30],int n,int s){
    int l=0,h=n-1;
    while(l<=h){
    int mid=(l+h)/2;

        if(a[mid]==s){
            cout<< mid<<" ";
            int d=mid-1;
            while(a[d]==s){
                cout<<d<<" ";
                d--;
            }
            while(a[mid+1]==s){
                cout<<mid+1<<" ";
                mid++;
            }
            return 1;

        }
        else if(a[mid]>s){
            h=mid-1;
        }
        else
            l=mid+1;
    }
    return -1;
}
int main(){
    int a[30],n,s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<"Enter search value : ";
    cin>>s;
   binarySearch(a,n,s);

}
