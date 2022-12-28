#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  int m,n; //no of batsmen = m and bowlers = n 

struct batsman
{
  char name[25],dubname[20];
  int runs, score, balls, total_bal,toruns, ones, twos, threes, fours, sixes;
  float str;  //strikerate

} t1p[105],t2p[25],t1,t2;      //t1p = team1 batsmen  t2p = team2 batsmen

struct bowler
{
  char name[25];
  int rungv, wkt, overs;
  int max_w;
  float econ;
} t1bo[100],t2bo[100];    // t1bo = team1 bowlers and t2bo = team2 bowlers


int max_wic(struct bowler t1p[],struct bowler t2p[]);


int main() {
  int p_balls,score,wickets,balls,c_overs,runrate,overs,scorer,r,i,choice;
  int t1_total_runs,t2_total_runs;
char search_batsmen[20];
char search_bowler[20];
char Team1[10], Team2[10];

printf("--------------------------------CRICKET SCORE CARD------------------------------------"
         "----\n");
  
  printf("Enter Name of Team1:");
  scanf("%s", Team1);
  printf("Enter Name of Team2:");
  scanf("%s", Team2);
  printf("Enter the number of overs :");
  scanf("%d",&overs);
  printf("Enter number of Batsmens in the team : \n");
scanf("%d",&m);
printf("Enter number of Bowlers in the team : \n");
scanf("%d",&n);
  int team1_runs=0,team2_runs=0;
  int toss;
 printf("%s is batting first : \n",Team1);
 printf("------------------------------------------------------------------------"
         "----\n");
for(i=0;i<m;i++){
 printf("Enter name of batsman%d:\n", i + 1);
    scanf("%s", t1p[i].name);
    printf("Enter the number of ones scored by player%d:\n ", i + 1);
    scanf("%d", &t1p[i].ones);
    printf("Enter the number of twos scored by player%d:\n ", i + 1);
    scanf("%d", &t1p[i].twos);
    printf("Enter the number of threes scored by player%d:\n ", i + 1);
    scanf("%d", &t1p[i].threes);
    printf("Enter the number of fours scored by player%d:\n ", i + 1);
    scanf("%d", &t1p[i].fours);
    printf("Enter the number of sixes scored by player%d:\n ", i + 1);
    scanf("%d", &t1p[i].sixes);
    printf("Enter the balls played by the player%d:\n", i + 1);
    scanf("%d", &t1p[i].balls);
}
printf("\n");
printf("------------------------------------------------------------------------"
         "----\n");
printf("\n");
printf("Enter the Details of %s Bowlers : \n",Team2);
for(i=0;i<n;i++){
printf("\nEnter name of bowler%d:", i + 1);
    scanf("%s", t2bo[i].name);
    printf("Enter the runs given by the bowler%d:\n ", i + 1);
    scanf("%d", &t2bo[i].rungv);
printf("Enter the overs bowled by the bowler%d:\n", i + 1);
    scanf("%d", &t2bo[i].overs);
    printf("Enter the wickets taken by the bowler%d\n", i + 1);
    scanf("%d", &t2bo[i].wkt);
}
printf("\n");
printf("%s is batting : \n",Team2);
printf("------------------------------------------------------------------------"
         "----\n");

printf("Enter %s Batmens Details: \n",Team2);
for(i=0;i<m;i++){
 printf("Enter name of batsman%d:\n", i + 1);
  scanf("%s", t2p[i].name);
    printf("Enter the number of ones scored by player%d:\n ", i + 1);
    scanf("%d", &t2p[i].ones);
    printf("Enter the number of twos scored by player%d:\n ", i + 1);
    scanf("%d", &t2p[i].twos);
    printf("Enter the number of threes scored by player%d:\n ", i + 1);
    scanf("%d", &t2p[i].threes);
    printf("Enter the number of fours scored by player%d:\n ", i + 1);
    scanf("%d", &t2p[i].fours);
printf("Enter the number of sixes scored by player%d:\n ", i + 1);
    scanf("%d", &t2p[i].sixes);
    printf("Enter the balls played by the player%d:\n", i + 1);
    scanf("%d", &t2p[i].balls);
}
printf("------------------------------------------------------------------------"
         "----\n");
printf("Enter the Details of %s Bowlers : \n",Team1);
for(i=0;i<n;i++){
printf("\nEnter name of bowler%d:", i + 1);
    scanf("%s", t1bo[i].name);
    printf("Enter the runs given by the bowler%d:\n ", i + 1);
    scanf("%d", &t1bo[i].rungv);
   printf("Enter the overs bowled by the bowler%d:\n", i + 1);
    scanf("%d", &t1bo[i].overs);
    printf("Enter the wickets taken by the bowler%d\n", i + 1);
    scanf("%d", &t1bo[i].wkt);
}
printf("\n");

printf("Thanks for Entering Details !! \n");
printf("\n");
for(i=0;i<m;i++){
t1p[i].runs = 1 *(t1p[i].ones) + 2 * (t1p[i].twos) + 3 *(t1p[i].threes) + 4 *(t1p[i].fours) + 6*(t1p[i].sixes);
t1p[i].str = (t1p[i].runs )*100/ t1p[i].balls;
t2p[i].runs = 1 *(t2p[i].ones) + 2 * (t2p[i].twos) + 3 *(t2p[i].threes) + 4 *(t2p[i].fours) + 6*(t2p[i].sixes); 
t2p[i].str = (t2p[i].runs )*100/ t2p[i].balls;

}
for(i=0;i<n;i++){
t1bo[i].econ = t1bo[i].rungv / t1bo[i].overs;
t2bo[i].econ = t2bo[i].rungv / t2bo[i].overs;
}
for(i=0;i<m;i++){
t1.toruns += t1p[i].runs;
}
for(i=0;i<m;i++){
t2.toruns += t2p[i].runs;
}
  
//////////////////////////////////// celebration
if(t1.toruns > t2.toruns){
  printf("---------------%s  WON THE MATCH !!!!---------------------------\n",Team1);
}

else {
 printf("----------------%s WON THE MATCH !!!!---------------------------\n",Team2);

}
printf("------------------------------------------------------------------------"
         "----\n");
// match summary
               
printf("FIRST INNINGS: \n");

  printf("======================================================================="
         "=====\n");
  printf(" Batsman        runs           balls        fours       sixes        "
         " sr   \n");
  printf("======================================================================="
         "=====\n");
for(i=0;i<m;i++){
printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n", t1p[i].name,
           t1p[i].runs, t1p[i].balls, t1p[i].fours, t1p[i].sixes, t1p[i].str);
}

printf("TOTAL RUNS:%d\n\n",t1.toruns);
  printf("\n\n");


printf("========================================================================"
         "=====\n");
  printf(" Bowler        overs           runs        wicket       economy\n");
  printf("======================================================================="
         "=====\n");
for(i=0;i<n;i++){
printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n\n", t2bo[i].name, t2bo[i].overs,
           t2bo[i].rungv, t2bo[i].wkt, t2bo[i].econ);
}

printf("SECOND INNINGS: \n");
printf("\n");
printf("======================================================================="
         "=====\n");
  printf(" Batsman        runs           balls        fours       sixes        "
         " sr   \n");
  printf("======================================================================="
         "=====\n");
for(i=0;i<m;i++){

printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n", t2p[i].name,
           t2p[i].runs, t2p[i].balls, t2p[i].fours, t2p[i].sixes, t2p[i].str);
}
printf("TOTAL RUNS:%d\n\n",t2.toruns);
  printf("\n\n");


printf("======================================================================="
         "=====\n");
printf(" Bowler        overs           runs        wicket       economy\n");
printf("======================================================================="
         "=====\n");
for(i=0;i<n;i++){

printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n\n", t1bo[i].name, t1bo[i].overs,t1bo[i].rungv, t1bo[i].wkt, t1bo[i].econ);

}
printf("------------------------------------------------------------------------"
         "----\n");
int k,l,u,v,j,g,st1,st2;
char final_max_runs_name;
int max_runs_t1,max_runs_t2,final_max_runs,max_fours;
max_runs_t1 = t1p[0].runs;
max_runs_t2 = t2p[0].runs;
int max1,max2,max,st;
max1 = t1bo[0].wkt;
max2 = t2bo[0].wkt;
int max_six_t1,max_six_t2,max_sixes;
max_six_t1 = t1p[0].sixes;
max_six_t2 = t2p[0].sixes;



do
  {
printf(
        "Enter the choice:\n1)Batsman detail:\n2)Bowlersdetail:\n"
        "3)Record:\n4)Exit\n ");
    scanf("%d", &choice);
printf("\n");
switch (choice) 
{
case 1:

printf("Enter the name of batmen for deatils :");
scanf("%s",search_batsmen);

for(i=0;i<m;i++){
 
k = strcmp(search_batsmen,t1p[i].name);  // for compareing two strings
  if(k==0){    // here true is 0 anf false 1
  printf("======================================================================="
         "=====\n");
       printf("The Total runs scored : %d \n",t1p[i].runs);
  printf("Number of Fours = %d \n",t1p[i].fours);
  printf("Number of Sixes = %d \n",t1p[i].sixes);
  printf("Strike rate = %.4f\n",t1p[i].str);
  printf("======================================================================="
         "=====\n");
  printf("\n");
    }
else{
l = strcmp(t2p[i].name,search_batsmen);
 if(l==0){
printf("======================================================================="
         "=====\n");
       printf("The Total runs scored : %d \n",t2p[i].runs);
  printf("Number of Fours = %d \n",t2p[i].fours);
  printf("Number of Sixes = %d \n",t2p[i].sixes);
  printf("Strike rate = %.4f\n",t2p[i].str);
  printf("======================================================================="
         "=====\n");
  printf("\n \n");
 }  
}

}
break;
// t2 bowler 1 t2 batsmen 1
case 2:
 printf("Enter the name of Bowler for deatils : \n");
scanf("%s",search_bowler);

for(i=0;i<n;i++){
  u = strcmp(search_bowler,t1bo[i].name);
if( u==0 ){
  printf("======================================================================="
         "=====\n");
  printf("The Runs given by the Bowlers : %d \n",t1bo[i].rungv);
  printf("Wickets taken : %d \n",t1bo[i].wkt);
printf("Economy of %s is %.4f \n",t1bo[i].name,t1bo[i].econ);
printf("======================================================================="
         "=====\n");
printf("\n");

}
else {
   j = strcmp(search_bowler,t2bo[i].name);
  if(j==0){
printf("======================================================================="
         "=====\n");
 printf("The Runs given by the Bowlers : %d \n",t2bo[i].rungv);
  printf("Wickets taken : %d \n",t2bo[i].wkt);
printf("Economy of %s is %.4f \n",t2bo[i].name,t2bo[i].econ);
  }
  printf("======================================================================="
         "=====\n");
  printf("\n");
}
}
break;
////////////////
//all working
case 3:
for(i=0;i<m;i++){
if(max_runs_t1 < t1p[i].runs){
max_runs_t1 = t1p[i].runs;
st1 = i;
}
if(max_runs_t2 < t2p[i].runs){
max_runs_t2 = t2p[i].runs;
st1 =i;
}
}
printf("------------------------------------------------------------------------"
         "----\n");
if(max_runs_t1 > max_runs_t2){
  // final_max_runs = max_runs_t1;
printf("Highest runs scored from all the batsmans: %d  by  %s \n",max_runs_t1,t1p[st1].name );
}
else {
  // final_max_runs = max_runs_t2;
 printf("Highest runs scored from all the batsmans: %d  by  %s \n",max_runs_t2,t2p[st1].name );
}
for(i=0;i<n;i++) {
for(int i=0;i<n;i++){
if(max1 < t1bo[i].wkt){
max1 = t1bo[i].wkt;
st = i;
}
if(max2 < t2bo[i].wkt){
max2 = t2bo[i].wkt;
st = i;
}
}
}
printf("------------------------------------------------------------------------"
         "----\n");
if(max1>max2){
max = max1;
  printf("Maximum wickets taken by the bowler:%d by %s \n", max,t1bo[st].name);
}
else {
  max = max2;
  printf("Maximum wickets taken by the bowler:%d by %s \n", max,t2bo[st].name);
}

printf("------------------------------------------------------------------------"
         "----\n");
printf("\n");
for(int i=0;i<n;i++){
if(max_six_t1 < t1p[i].sixes){
max_six_t1 = t1p[i].sixes;
st = i;
}
if(max_six_t2 < t2p[i].sixes){
max_six_t2 = t2p[i].sixes;
st = i;
}
}
printf("------------------------------------------------------------------------"
         "----\n");
if(max_six_t1>max_six_t2){
max_sixes = max_six_t1;
  printf("Maximum SIXES hitted is:%d by %s \n", max_sixes,t1p[st].name);
}
else {
  max_sixes = max_six_t2;
  printf("Maximum SIXES hitted is:%d by %s \n", max_sixes,t2p[st].name);
}
printf("------------------------------------------------------------------------"
         "----\n");

for(int i=0;i<n;i++){
if(max_six_t1 < t1p[i].fours){
max_six_t1 = t1p[i].fours;
st = i;
}
if(max_six_t2 < t2p[i].fours){
max_six_t2 = t2p[i].fours;
st = i;
}
}
printf("------------------------------------------------------------------------"
         "----\n");
if(max_six_t1>max_six_t2){
max_sixes = max_six_t1;
  printf("Maximum FOURS hitted is:%d by %s \n", max_sixes,t1p[st].name);
}
else {
  max_sixes = max_six_t2;
  printf("Maximum FOURS hitted is:%d by %s \n", max_sixes,t2p[st].name);
}
printf("------------------------------------------------------------------------"
         "----\n");
printf("\n");

  break;


case 4:
      exit(1);

  default:
      printf("Enter the correct choice\n");
}
  }  while (choice != 5);

}






