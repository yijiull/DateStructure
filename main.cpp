#include <bits/stdc++.h>
#include <memory>
#include "bst.h"
using namespace std;
int main(){
    BST<int> tr;
    int x;
    
    int op;
    while(cin>>op>>x){
        if(op == 1){
            tr.insert_equal(x);
        }else{
            tr.remove(x);
        }
            tr.print(tr.root());
        printf("----------------------\n");
    }
}