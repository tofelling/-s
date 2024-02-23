#include <iostream>
using namespace std;
int fib(int i );
int main (){
      int i;
      cout <<"input the item fibonacci:"<<endl;
      cin>>i;
      cout<<"fib("<<i<<")="<<fib (i )<<endl;
      return 0;
}
 
   int fib(int i) {
    if (i == 1 || i == 2) { // 移除分号，并用花括号包裹后续的return语句
        return 1;
    } else {
        return fib(i - 1) + fib(i - 2);
    }
}

#include <iostream>
using namespace std;
int fib(int i )
int main(){
int i ;
cout <<"input the them fibonacci"<<endl;
cin>>i;
cout <<"fib("<<i<<")="<<fib(i)<<endl;
return 0;
}  

int fib (int i){
if (i==1||i==2){
    return 1;
}
else {
    return fib(i-1)+fib(i-2);
}
}
