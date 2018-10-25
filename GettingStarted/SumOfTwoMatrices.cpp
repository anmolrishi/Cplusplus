#include<iostream>
using namespace std;
 int main()
{
    int r,c,i,j,k;int *A,*B,*C;
    char ans;
        do{
            cout<<"Enter the value of rows and columns of both the matrices : \n";
            cin>>r>>c;
            A = new int(r*c);
            B = new int(r*c);
            C = new int(r*c);
            cout<<"\nEnter elements of matrix A : \n";
            for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                    cin>>*(A + i*c + j);
                }
            }
            cout<<"\nEnter elements of matrix B : \n";
            for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                    cin>>*(B + i*c + j);
                }
            }

            for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                       *(C + i*c + j) = 0;
                }
            }

            for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                       *(C + i*c + j) = *(A + i*c + j) + *(B + i*c + j);
                }
            }

            cout<<"\nSum of the matrices : \n";
            for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                     cout<<*(C + i*c + j) <<' ';
                 }
                cout<<'\n';
            }
             cout <<"\nAgain? (Y/N) ";
            cin>>ans;
        }while(ans=='y'||ans=='Y');
    return 0;
}
