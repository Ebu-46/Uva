#include<bits/stdc++.h>
using namespace std;
struct pa {
    int a,b;
};
int main(){
    pa x,y;
    int n,m,l,i,j,c;
    while(cin>>m>>n && m){
        c=0;
        char mat[m][n];
        queue<pa>q;
        vector<pa>v;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++){
                cin>>mat[i][j];
                if(mat[i][j]=='@'){
                    x.a=i;
                    x.b=j;
                    v.push_back(x);
                }
            }
        l=v.size();
        for(i=0;i<l;i++){
            x=v[i];
            if(mat[x.a][x.b]=='@'){
                q.push(v[i]);
                while(!q.empty()){
                    x=q.front();
                    mat[x.a][x.b]='*';
                    q.pop();

                    if(x.a-1>=0&&x.b-1>=0&&mat[x.a-1][x.b-1]=='@'){
                        y.a=x.a-1;
                        y.b=x.b-1;
                        q.push(y);
                    }
                    if(x.a-1>=0&&x.b>=0&&mat[x.a-1][x.b]=='@'){
                        y.a=x.a-1;
                        y.b=x.b;
                        q.push(y);
                    }

                    if(x.a-1>=0&&x.b+1<n&&mat[x.a-1][x.b+1]=='@'){
                        y.a=x.a-1;
                        y.b=x.b+1;
                        q.push(y);
                    }

                    if(x.a>=0&&x.b-1>=0&&mat[x.a][x.b-1]=='@'){
                        y.a=x.a;
                        y.b=x.b-1;
                        q.push(y);
                    }

                    if(x.a>=0&&x.b+1<n&&mat[x.a][x.b+1]=='@'){
                        y.a=x.a;
                        y.b=x.b+1;
                        q.push(y);
                    }

                    if(x.a+1<m&&x.b-1>=0&&mat[x.a+1][x.b-1]=='@'){
                        y.a=x.a+1;
                        y.b=x.b-1;
                        q.push(y);
                    }

                    if(x.a+1<m&&x.b>=0&&mat[x.a+1][x.b]=='@'){
                        y.a=x.a+1;
                        y.b=x.b;
                        q.push(y);
                    }

                    if(x.a+1<m&&x.b+1<n&&mat[x.a+1][x.b+1]=='@'){
                        y.a=x.a+1;
                        y.b=x.b+1;
                        q.push(y);
                    }


                }
                c++;
            }
        }

    cout<<c<<endl;
    }
return 0;
}


