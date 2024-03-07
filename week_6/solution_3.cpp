#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Student{
   private:
      int scores[5];
      int totalScore;
   public:
      void input(){
          for(int i=0;i<5;i++){
              cin>>scores[i];
          }
      }
      int calculateTotalScore(){
          int sum = 0;
          for(int j=0;j<5;j++){
              sum+=scores[j];
          }
          totalScore=sum;
          return sum;
      } 
      int getTotalScore(){return totalScore;}
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    Student list[n];
    for (int i =0; i<n; i++) {
        list[i].input();
        list[i].calculateTotalScore();
    }
    int count =0;
    for (int i = 1; i<n; i++) {
        if(list[i].getTotalScore()>list[0].getTotalScore()) count++;
    }
    cout<<count;
    return 0;
}
