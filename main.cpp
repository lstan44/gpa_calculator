#include <iostream>
using namespace std;
void gp(double gr[], double gp[], int cr, int classes); /* this function will take the grades for each class from the user and calculate the gradepoints received for each grade. */

double total_gp(double arr[], int SIZE); //calculates total //gradepoints
int main() {
    int num_classes=5; //assuming five classes per semester
    double credit=3.0; //assuming that each class is a 3 credit class
    double total_cred = num_classes * credit;
    double grades[num_classes];//grades for 1st semester
    double grades2[num_classes]; //holds grades for second semester
    double gradepoints[num_classes];//gradepoints for first semester
    double gradepoints2[num_classes];// gradepoints for second semester
    cout<<"First Semester:\n";
    gp(grades,gradepoints,credit,num_classes);

    cout<<"Second semester:\n";
    gp(grades2,gradepoints2,credit,num_classes);

    //calculate the total gradepoints2
    double totalgp = total_gp(gradepoints,num_classes);
    double totalgp2 = total_gp(gradepoints2,num_classes);

    double gpa = totalgp/total_cred;
    cout<<"Your gpa for 1st semester is " <<gpa<<endl;

    double gpa2 = totalgp2/total_cred;
    cout<<"Your gpa for 2nd semester is " <<gpa2<<endl;

    cout<<"You end the year with an overall gpa of " <<(gpa + gpa2)/2<<endl;
}
void gp(double gr[], double gp[], int cr, int classes){ //gp= gradepoints, gr = grades, cr = credits
    for(int i=0; i<classes; i++){
        cout<<"Enter grade for "<<i+1 <<" class:\n";
        cin>>gr[i];
        if(gr[i]<=70){
            gp[i]=0;
        }
        else if(gr[i]>70 && gr[i]<=75){ 
            gp[i]=1*cr;
        }
        else if(gr[i]>75 && gr[i]<=80){
            gp[i]=2*cr;
        }
        else if(gr[i]>80 && gr[i]<=90){
            gp[i]=3*cr;
        }
        else if(gr[i]>90){
            gp[i]=4*cr;
        }
    }
}
double total_gp(double arr[], int SIZE){
    double total_gp = 0.0;
    for(int i=0; i<SIZE; i++){
        total_gp +=arr[i];
    }
    return total_gp;
}