#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<vector<int>>& board,int r,int c,int k){
    for(int i=0;i<9;i++)
    {
        if(board[r][i]==k) return false;
        if(board[i][c]==k) return false;
    }
    for(int i=(r/3)*3;i<(((r/3)*3)+3);i++)
    {
        for(int j=(c/3)*3;j<(((c/3)*3)+3);j++)
        {
            if(board[i][j]==k) return false;
        }
    }
    return true;
}
bool solveboard(vector<vector<int>>& board)
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j] == 0){
                for(int k=1;k<=9;k++)
                {
                    if(ispossible(board,i,j,k)){
                        board[i][j]=k;
                        if(solveboard(board)){
                           return true;
                        }
                        board[i][j]=0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main()
{
    vector<vector<int>>board(9,vector<int>(9,0));
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>board[i][j];
        }
    }
    if(solveboard(board))
     {
        for(int i=0;i<9;i++)
         {
          for(int j=0;j<9;j++)
           {
            cout<<board[i][j]<<" ";
           }
          cout<<endl;
         
         }
    }
    else cout<<"0/n";
}