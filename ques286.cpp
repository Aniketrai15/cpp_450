#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(int x,stack<int> &st){

    if(st.empty()){
        st.push(x);
        return;
    }
    int ele=st.top();
    st.pop();
    insertAtBottom(x,st);
    st.push(ele);
}

void reverseStack(stack<int> &st){

    if(st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(ele,st); 
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);
    while(!st.empty()){
        int n = st.top();
        cout<<n<<" ";
        st.pop();

    }
    cout<<endl;


       
    return 0;
}