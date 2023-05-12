// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void selectionSort(int *ar, int r, int c, int max){
    if(r==0) return;
    
    if(r>c){
        if(ar[c]>ar[max]) selectionSort(ar, r, c+1, c);
        else selectionSort(ar, r, c+1, max);
    }
    else{
        int temp = ar[r-1];
        ar[r-1] = ar[max];
        ar[max] = temp;
        
        selectionSort(ar, r-1, 0, 0);
    }
}
int main() {
    // Write C++ code here
    int ar[] = {8,1,6,0,7,9,2,4};
    
    selectionSort(ar, sizeof(ar)/sizeof(int), 0, 0);
    
    for(auto val: ar) cout<<val<<" ";
    
    return 0;
}
