//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqazJZS1pTN0hNcVBHWU1mZmV5dldOVlpfQVg1QXxBQ3Jtc0trM25scVFlUkdsZ0Q1WlpOUFY2a2M5cUpndmFlN0dDQWFhMnRvLXdibTVYSUVfM1l6blI4YjhKR3RMc0FGaHRDT1QzNFJGN3FHN2FISThkOWVKaXRJUnRJek82LTBQNVZkMEY4bHFDY2JrcWdWbjN1aw&q=https%3A%2F%2Fbit.ly%2F3sGe2uL&v=dWsQroffE-U 


#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    if(n==0)
       return 1;
    return n*func(n-1);
}
int main() {
    int n;
    cin>>n;
    if(n<0)
    {
        cout<<"Error"<<endl;
    }
    else
       cout<<func(n)<<endl;
    return 0;
}