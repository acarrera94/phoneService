/*
 Andre Carrera
 26-707-7444
 CS 142 Fall 2015 Midterm 1 Exam.
 
 I assume I only have to state at the end if the new plan became cheaper in the first twelve months and at which month.
 Not if the new plan and old plan tied at the end of the end of the twelve months. 
 
 
 TEST CASES 
 
 What is the monthly charge for your current plan? 100
 What is the charge to drop your current plan? 200
 How much can you sell your current phone for? 100
 
 What is the monthly charge on the new plan? 50
 What is the cost of the phone on the new plan? 300
 
 For month 1:
	Current plan cumulative cost: 100
	New plan cumulative cost: 450
	The cumulative cost of the CURRENT plan is less.
 
 For month 2:
	Current plan cumulative cost: 200
	New plan cumulative cost: 500
	The cumulative cost of the CURRENT plan is less.
 
 For month 3:
	Current plan cumulative cost: 300
	New plan cumulative cost: 550
	The cumulative cost of the CURRENT plan is less.
 
 For month 4:
	Current plan cumulative cost: 400
	New plan cumulative cost: 600
	The cumulative cost of the CURRENT plan is less.
 
 For month 5:
	Current plan cumulative cost: 500
	New plan cumulative cost: 650
	The cumulative cost of the CURRENT plan is less.
 
 For month 6:
	Current plan cumulative cost: 600
	New plan cumulative cost: 700
	The cumulative cost of the CURRENT plan is less.
 
 For month 7:
	Current plan cumulative cost: 700
	New plan cumulative cost: 750
	The cumulative cost of the CURRENT plan is less.
 
 For month 8:
	Current plan cumulative cost: 800
	New plan cumulative cost: 800
	Both plans have the SAME cumulative cost.
 
 For month 9:
	Current plan cumulative cost: 900
	New plan cumulative cost: 850
	The cumulative cost of the NEW plan is less.
 
 
 For month 10:
	Current plan cumulative cost: 1000
	New plan cumulative cost: 900
	The cumulative cost of the NEW plan is less.
 
 
 For month 11:
	Current plan cumulative cost: 1100
	New plan cumulative cost: 950
	The cumulative cost of the NEW plan is less.
 
 
 For month 12:
	Current plan cumulative cost: 1200
	New plan cumulative cost: 1000
	The cumulative cost of the NEW plan is less.
 
 ** The new plan was first cheaper in month 9.
 
 
 
 What is the monthly charge for your current plan? 50
 What is the charge to drop your current plan? 100
 How much can you sell your current phone for? 50
 
 What is the monthly charge on the new plan? 40
 What is the cost of the phone on the new plan? 600
 
 For month 1:
	Current plan cumulative cost: 50
	New plan cumulative cost: 690
	The cumulative cost of the CURRENT plan is less.
 
 For month 2:
	Current plan cumulative cost: 100
	New plan cumulative cost: 730
	The cumulative cost of the CURRENT plan is less.
 
 For month 3:
	Current plan cumulative cost: 150
	New plan cumulative cost: 770
	The cumulative cost of the CURRENT plan is less.
 
 For month 4:
	Current plan cumulative cost: 200
	New plan cumulative cost: 810
	The cumulative cost of the CURRENT plan is less.
 
 For month 5:
	Current plan cumulative cost: 250
	New plan cumulative cost: 850
	The cumulative cost of the CURRENT plan is less.
 
 For month 6:
	Current plan cumulative cost: 300
	New plan cumulative cost: 890
	The cumulative cost of the CURRENT plan is less.
 
 For month 7:
	Current plan cumulative cost: 350
	New plan cumulative cost: 930
	The cumulative cost of the CURRENT plan is less.
 
 For month 8:
	Current plan cumulative cost: 400
	New plan cumulative cost: 970
	The cumulative cost of the CURRENT plan is less.
 
 For month 9:
	Current plan cumulative cost: 450
	New plan cumulative cost: 1010
	The cumulative cost of the CURRENT plan is less.
 
 For month 10:
	Current plan cumulative cost: 500
	New plan cumulative cost: 1050
	The cumulative cost of the CURRENT plan is less.
 
 For month 11:
	Current plan cumulative cost: 550
	New plan cumulative cost: 1090
	The cumulative cost of the CURRENT plan is less.
 
 For month 12:
	Current plan cumulative cost: 600
	New plan cumulative cost: 1130
	The cumulative cost of the CURRENT plan is less.
 ** The new plan was not cheaper in the first 12 months.
 
 
 
 What is the monthly charge for your current plan? 39.99
 What is the charge to drop your current plan? 100
 How much can you sell your current phone for? 100
 
 What is the monthly charge on the new plan? 29.95
 What is the cost of the phone on the new plan? 165
 
 For month 1:
	Current plan cumulative cost: 39.99
	New plan cumulative cost: 194.95
	The cumulative cost of the CURRENT plan is less.
 
 For month 2:
	Current plan cumulative cost: 79.98
	New plan cumulative cost: 224.9
	The cumulative cost of the CURRENT plan is less.
 
 For month 3:
	Current plan cumulative cost: 119.97
	New plan cumulative cost: 254.85
	The cumulative cost of the CURRENT plan is less.
 
 For month 4:
	Current plan cumulative cost: 159.96
	New plan cumulative cost: 284.8
	The cumulative cost of the CURRENT plan is less.
 
 For month 5:
	Current plan cumulative cost: 199.95
	New plan cumulative cost: 314.75
	The cumulative cost of the CURRENT plan is less.
 
 For month 6:
	Current plan cumulative cost: 239.94
	New plan cumulative cost: 344.7
	The cumulative cost of the CURRENT plan is less.
 
 For month 7:
	Current plan cumulative cost: 279.93
	New plan cumulative cost: 374.65
	The cumulative cost of the CURRENT plan is less.
 
 For month 8:
	Current plan cumulative cost: 319.92
	New plan cumulative cost: 404.6
	The cumulative cost of the CURRENT plan is less.
 
 For month 9:
	Current plan cumulative cost: 359.91
	New plan cumulative cost: 434.55
	The cumulative cost of the CURRENT plan is less.
 
 For month 10:
	Current plan cumulative cost: 399.9
	New plan cumulative cost: 464.5
	The cumulative cost of the CURRENT plan is less.
 
 For month 11:
	Current plan cumulative cost: 439.89
	New plan cumulative cost: 494.45
	The cumulative cost of the CURRENT plan is less.
 
 For month 12:
	Current plan cumulative cost: 479.88
	New plan cumulative cost: 524.4
	The cumulative cost of the CURRENT plan is less.
 ** The new plan was not cheaper in the first 12 months.
 
 */

#include <iostream>
using namespace std;

void cumulateOldPlan (double& oldCharge, double& cumulateOldCharge);
void displayMonths (double& oldCharge);
int main() {
    
    
    double oldCharge = 0; //initializing values
    double cancelCharge = 0;
    double sellPhone = 0;
    double newCharge = 0;
    double newPhone = 0;
    double cumulateOldCharge = 0;
    double startingCumulativeCost = 0;
    double cumulativeNewCost = 0;
    int pointerMonth = 0;
    int correctMonths = 1;
    int displayMonths = 0;
    const int NOMONTH = 0; // constants
    const int MONTHMAX = 12;
    
    
    
    cout << "What is the monthly charge for your current plan? "; //displays and asks for input
    cin >> oldCharge;
    cout << "What is the charge to drop your current plan? ";
    cin >> cancelCharge;
    cout << "How much can you sell your current phone for? ";
    cin >> sellPhone;
    cout << "\nWhat is the monthly charge on the new plan? ";
    cin >> newCharge;
    cout << "What is the cost of the phone on the new plan? ";
    cin >> newPhone;
    

    
    cumulateOldCharge = oldCharge;  //setting values so that it can be added on to.
    startingCumulativeCost = newPhone +newCharge +cancelCharge -sellPhone;
    cumulativeNewCost = startingCumulativeCost;
    
    for (int months = 0; months < MONTHMAX; months++) { //loop to display each month
        displayMonths = months +correctMonths; //adds 1 to display the month correctly
        cout << "\nFor month " << displayMonths << ": " << endl;
        cout << "\tCurrent plan cumulative cost: " << cumulateOldCharge << endl;
        cout << "\tNew plan cumulative cost: " << cumulativeNewCost << endl;
        
        if (cumulateOldCharge < cumulativeNewCost) //displays which plan is less or the same
        {
            cout << "\tThe cumulative cost of the CURRENT plan is less." << endl;
        }
        if (cumulateOldCharge == cumulativeNewCost)
        {
            cout << "\tBoth plans have the SAME cumulative cost." << endl;
        }
        else if (cumulateOldCharge > cumulativeNewCost)
        {
            cout << "\tThe cumulative cost of the NEW plan is less." << endl << endl;
            

            if (pointerMonth == NOMONTH){ //to see which month it becomes cheaper
                
            pointerMonth = displayMonths;  //sets it to the cheaper month
            }
            else if (pointerMonth > NOMONTH ) //unless it has already been set
            {
                
            }
        }
        
        cumulativeNewCost = cumulativeNewCost + newCharge; //adds on for the next loop cycle
        cumulateOldCharge = cumulateOldCharge + oldCharge;
    }
    
    if (pointerMonth >NOMONTH) //points to if it became cheaper and which month
    {
        cout << "** The new plan was first cheaper in month " << pointerMonth << "." << endl;
    }
    
    if (pointerMonth == NOMONTH)
    {
        cout << "** The new plan was not cheaper in the first 12 months." << endl;
    }
    
    
    return 0;
}

