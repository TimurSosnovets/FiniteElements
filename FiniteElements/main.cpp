#include <iostream>
#include <Vector>
using namespace std;
vector <int> f (vector <int> f1) {
    for (int i=0;i<f1.size();++i){
        f1[i]*=2;
    }
    return f1;
}
 int main () {
    vector <int> v = {1, 2, 3};
    cout<<"chef1 \n";
    v=f(v);
    for (int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    return 0;
}