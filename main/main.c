#include<stdio.h>
#include<stdlib.h>
int binarySearch(int arr[], int l, int r, int x);
void ArrayBinarySearch(int arr[],int n);
void ArrayBubbleSort(int b[],int n1);
void heading();
void swap(int *xp, int *yp);
void bubbleSort(int a[], int r);
void printArray(int a[], int size);
void EmergencyContact();
void Registration();
void Guidelines();
void Precautions();
void Vaccination();
int main()
{ int z,arr[] ={1,2,3,4,5,6,7,8,9,10},n,t,n1,b[]={428576,417132,435571,423321,383633,339193,381394,494443,477283,466537};
heading();
printf("\nDear user ,choose your option from the following:\n1.WorldCovidUpdate ");
printf("\n2.MaxMinCasesCount\n\t\t[highest and lowest no.of cases on that particular date]\n3.Precautions\n4.Guidelines");
printf("\n5.Vaccination\n6.Registration\n7.EmergencyContact\n8.Exit");

printf("\n\n");

do
{
printf("\n\nEnter your option no. : ");
scanf("%d",&z);
switch(z)
{
case 1 : ArrayBinarySearch(arr, n);
break;

case 2 : ArrayBubbleSort(b,n1);
break;

case 3 : Precautions();
break;

case 4 : Guidelines();
break;

case 5 : Vaccination();
break;

case 6 : Registration();
break;

case 7 : EmergencyContact();
break;

case 8 : printf("THANK YOU !!!");
break;
}

}while(z<=7);

return 0;
}

void heading()

{
printf("\n\t\t\t----------------------------------------------------------------------------");
printf("\n\t\t\t###########################################################################");
printf("\n\t\t\t############                                                   ############");
printf("\n\t\t\t############         RAMPANT DATA COLLATE Project in C         ############");
printf("\n\t\t\t############                                                   ############");
printf("\n\t\t\t###########################################################################");
printf("\n\t\t\t---------------------------------------------------------------------------\n");

printf("\n\n\t\t\t----------------------------------------------------------------------------");

printf("\n\n");
printf("\n\t\t\t----------------------------------------------------------------------------\n");
printf("\t\t\t\t\t =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
printf("\n\t\t\t\t\t\t\t =  WELCOME  =");
printf("\n\t\t\t\t\t\t\t =    TO     =");
printf("\n\t\t\t\t\t\t\t =  RAMPANT  =");
printf("\n\t\t\t\t\t\t\t =   DATA    =");
printf("\n\t\t\t\t\t\t\t =  COLLATE  =");
printf("\n\t\t\t\t\t =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
printf("\n\t\t\t---------------------------------------------------------------------------\n");

}

void ArrayBinarySearch(int arr[],int n)
{

//n = sizeof(arr);
int x;
printf("Enter the date [1 - 10 th of july] :");
scanf("%d",&x);
int result = binarySearch(arr, 0, n - 1, x);
if (result == -1)
printf("DATA NOT FOUND!!!");
else

switch(x)
{
case 1: printf("\nTOTAL NUMBER OF NEW CASES:4,28,576\nTOTALNUMBER OF DEATHS:8997\nTOTAL NUMBER OF RECOVERIES:2,45,342");
printf("\n");
break;
case 2: printf("\nTOTAL NUMBER OF NEW CASES:4,17,132\nTOTAL NUMBER OF DEATHS:8603\nTOTAL NUMBER OF RECOVERIES:2,01,312");
printf("\n");
break;
case 3: printf("\nTOTAL NUMBER OF NEW CASES:4,35,571\nTOTAL NUMBER OF DEATHS:8428\nTOTAL NUMBER OF RECOVERIES:1,56,987");
printf("\n");
break;
case 4: printf("\nTOTAL NUMBER OF NEW CASES:4,23,321\nTOTAL NUMBER OF DEATHS:8199\nTOTAL NUMBER OF RECOVERIES:2,98,199");
printf("\n");
break;
case 5: printf("\nTOTAL NUMBER OF NEW CASES:3,83,633\nTOTAL NUMBER OF DEATHS:7107\nTOTAL NUMBER OF RECOVERIES:3,20,764");
printf("\n");
break;
case 6: printf("\nTOTAL NUMBER OF NEW CASES:3,39,193\nTOTAL NUMBER OF DEATHS:6359\nTOTAL NUMBER OF RECOVERIES:3,10,056");
printf("\n");
break;
case 7: printf("\nTOTAL NUMBER OF NEW CASES:3,81,394\nTOTAL NUMBER OF DEATHS:7410\nTOTAL NUMBER OF RECOVERIES:2,49,563");
printf("\n");
break;

case 8: printf("\nTOTAL NUMBER OF NEW CASES:4,94,443\nTOTAL NUMBER OF DEATHS:9443\nTOTAL NUMBER OF RECOVERIES:2,10,192");
printf("\n");
break;
case 9: printf("\nTOTAL NUMBER OF NEW CASES:4,77,283\nTOTAL NUMBER OF DEATHS:8752\nTOTAL NUMBER OF RECOVERIES:2,43,967");
printf("\n");
break;
case 10: printf("\nTOTAL NUMBER OF NEW CASES:4,66,537\nTOTAL NUMBER OF DEATHS:8757\nTOTAL NUMBER OF RECOVERIES:2,38,675");
printf("\n");
break;

}

}

void ArrayBubbleSort(int b[],int n1)
{
//n1 = sizeof(b);
printf("\nMaximum and minimum count of cases occured during july 1st to 10 th");
bubbleSort(b, n1);

printf("\nthe maximum count = %d",b[n1-1]);
printf("\nthe minimum count = %d ",b[0]);
printf("\n");
printf("\n");

}

int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l) {
int mid = l + (r - l) / 2;

// If the element is present at the middle
// itself
if (arr[mid] == x)
return mid;

// If element is smaller than mid, then
// it can only be present in left subarray
if (arr[mid] > x)
return binarySearch(arr, l, mid - 1, x);

// Else the element can only be present
// in right subarray
return binarySearch(arr, mid + 1, r, x);
}

// We reach here when element is not
// present in array
return -1;
}

void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int b[], int n1)

{
int i, j;
for (i = 0; i < n1-1; i++)

// Last i elements are already in place
for (j = 0; j < n1-i-1; j++)
if (b[j] > b[j+1])
swap(&b[j], &b[j+1]);

}

/* Function to print an array */

void printArray(int b[], int size)
{
int i,j;
for (i=0; i < size; i++)
printf("\n%d ", b[i]);
printf("\n");

}
void Registration()
{printf("REGISTRATION DETAILS:\n\n");

printf("\n1. Where can I register for COVID-19 vaccination?");
printf("\nYou can log into the Co-WIN portal using the link www.cowin.gov.in and click ");
printf("\non the “Register/Sign In yourself” tab to register for COVID-19 vaccination.");
printf("\n\n2. Is there a mobile app that needs to be installed to register for vaccination?");
printf("\nThere is no authorised mobile app for registering for vaccination in India.");
printf("\n You need to log into the Co-WIN portal. You can also register for vaccination through the Aarogya Setu App.");
printf("\n\n3. Which age groups can register for vaccination on the Co-WIN portal?");
printf("\nAt present, all citizens above 45 years of age can register for vaccination.");
printf("\n\n4. Is online registration mandatory for Covid 19 vaccination?");
printf("\nNo. Vaccination Centres provide for a limited number of on-spot registration");
printf("\nslots every day. However, it is recommended to register online and schedule");
printf("\nvaccination in advance for a have hassle-free vaccination experience.");
printf("\n\n5. How many people can be registered in the Co-WIN portal through one mobile number?");
printf("\nUp to 4 people can be registered for vaccination using the same mobile number.");
printf("\n\n6. How can citizens with no access to smart phones or computers manage online registration?");
printf("\nUp to 4 people can be registered for vaccination using the same mobile number.");
printf("\nCitizens can take help from friends or family for online registration.");
printf("\nFacility for on-spot registration is also available.");
printf("\n\n7. Can I register for vaccination without Aadhaar card?");
printf("\nYes, you can register on Co-WIN portal using any of the following ID proofs: ");
printf("\na. Aadhaar card");
printf("\nb. Driving License");

printf("\nc. PAN card");
printf("\nd. Passport");
printf("\ne. Pension Passbook");
printf("\nf. NPR Smart Card");
printf("\ng. Voter ID (EPIC)");
printf("\n\n8. Is there any registration charge to be paid?");
printf("\nNo. There is no registration charge.");
printf("\n");
printf("\n");
}
void EmergencyContact()
{
printf("\n\nHere we give u list of Contacts\nthat you may need of :");
printf("\n\n");
//helpline no.s
printf("\n\nHELPLINE NUMBERS :");
printf("\n1] Health Ministry -- 1075\n2] Child -- 1098\n3] Mental Health -- 08046110007");
printf("\n4] Senior Citizens -- 14567\n5] Ayush Covid-19 Counselling -- 14443\n6] MyGov Whatsapp Helpdesk -- 9013151515 ");
//common no.s
printf("\n\nIMPORTANT NUMBERS FOR CHENNAI CITY");
printf("\n\nHospital , Ambulance & Other Important Numbers :");
printf("\n");
printf("\n1 National Hospital Ambulance -- 25240131\n2 Apollo Ambulance -- 1066 ,28294302\n13 Voluntary Health Service 22541972");
printf("\n3 St. Johns Ambulance -- 28194630\n4 Helpling Point Ambulance -- 28280257");
printf("\n5 Trauma Care Consortium -- 28150700 , 28240311\n6 Government General Hospital 25305000");
printf("\n7 Government Kilpauk Hospital 28364951\n8 Government Royapettah Hospital 28483051");

printf("\n9 Government Stanley Hospital 25281347\n10 Govt. Hospital for Women & Children 28191982");
printf("\n11 Kasturba Hospital for Women 28545449\n12 Institute of Child Health & Hospital 28191135");
//blood bank
printf("\n\nBLOOD BANK IN CHENNAI CITY\n\n1. Government Stanley Hospital Blood Bank -- 25214941\n2. Rotary Blood Bank -- 24881392");
printf("3. Indian Red Cross Society --28554425\n4. Jeevan Blood Bank --28220494");
printf("\n5. Kasturbha Gandhi Government Hospital --28545001\n6.Child Trust Hospital Blood bank --28259601/28259593");
printf("\n7. Apollo Hospital Blood Bank -- 28294870\n8. Royapettah Hospital ( Govt. ) Blood Bank -- 28533051") ;
printf("\n9.Lions Blood Bank 28415959/28414949");
printf("\n");
printf("\n");

}

void Guidelines()

{printf("\n");
printf("\n");
printf("GUIDELINES!!!");
printf("\n");
printf("\n");

printf("\n\nProtect yourself and others from COVID-19");
printf("\n");
printf("\n");

printf("\nIf COVID-19 is spreading in your community,stay safe by taking some simple precautions,\nsuch as physical");
printf("distancing, wearing a mask, keeping rooms well ventilated, avoiding crowds,cleaning your hands,\nand coughing ");
printf("into a bent elbow or tissue.\nCheck local advice where you live and work. Do it all!");

printf("\n\n\nI What to do to keep yourself and others safe from COVID-19");
printf("\n");
printf("\n");

printf("\n\nMaintain at least a 1-metre distance between yourself and others");
printf("rrisk of infection when they cough,");
printf("\nsneeze or speak. Maintain an even greater distance between yourself and others when indoors.");
printf("\nThe further away, the better.");
printf("\nMake wearing a mask a normal part of being around other people. ");
printf("\nThe appropriate use, storage and cleaning or disposal are essential to make masks as effective as possible.");

//mask
printf("\n\n\nII Here are the basics of how to wear a mask:");
printf("\n");
printf("\n");

printf("\n\nClean your hands before you put your mask on, as well as");
printf("\n before and after you take it off, and after you touch it at any time.");
printf("\nMake sure it covers both your nose, mouth and chin.");
printf("\nWhen you take off a mask, store it in a clean plastic bag, and every day either wash ");
printf("it if it’s a fabric mask, or dispose of a medical mask in a trash bin.");

printf("\nDon’t use masks with valves.");
printf("\n");
printf("\n");

printf("\nExamples of emergency response tasks associated with exposure risk levels");
printf("\n1.Lower (caution)");
printf("\n2.Medium");
printf("\n3.High");
printf("\n4.Very High");
printf("\n");
printf("\n");

printf("\n\nPerforming administrative duties in non-public areas of work sites,");
printf("\nsuch as police or fire stations, away from other staff members.");
printf("\nNote: For activities in the lower (caution) risk category,");
printf("\nOSHA's Interim Guidance for Workers and Employers");
printf("\n ofWorkers at Lower Risk of Exposure may be most appropriate.");

printf("\nInteracting, including as part of law enforcement or rescue operations, ");
printf("\nwith members of the general public, who are not known or suspected COVID-19 patients.");
printf("\nWorking at public-facing facilities, such as police stations,");
printf("\nwhere the public may arrive for assistance.");
printf("\nEntering the home of a person suspected of having or known to have COVID-19,");
printf("\nincluding when an occupant of the home reports signs and symptoms consistent with COVID-19.");

printf("\nProviding care for a known or suspected COVID-19 patient not involving aerosol- generating procedures.");

printf("\nPerforming aerosol-generating procedures ");

printf("\n(e.g., cardiopulmonary resuscitation, intubation) ");
printf("\non known or suspected COVID-19 patients.");
printf("\n");
printf("\n");
}

void Precautions()

{printf("\n");
printf("PRECAUTIONS");
printf("\nTo prevent the spread of COVID-19:");
printf("\n");
printf("\n");
printf("\n1.Clean your hands often. Use soap and water, or an alcohol-based hand rub.");
printf("\n2.Maintain a safe distance from anyone who is coughing or sneezing.");
printf("\n3.Wear a mask when physical distancing is not possible.");
printf("\n4.Don’t touch your eyes, nose or mouth.");
printf("\n5.Cover your nose and mouth with your bent elbow or a tissue when you cough or sneeze.");
printf("\n6.Stay home if you feel unwell.");
printf("\n7.If you have a fever, cough and difficulty breathing, seek medical attention.");
printf("\n8.Wash your hands often with soap and water for at least 20 seconds,") ;
printf("\n9.especially after you have been in a public place, or after blowing your nose, coughing, or sneezing.") ;
printf("\n10.It’s especially important to wash:") ;
printf("\n11.Before eating or preparing food") ;
printf("\n12.Before touching your face") ;
printf("\n13.After using the restroom") ;
printf("\n14.After leaving a public place") ;

printf("\n15.After blowing your nose, coughing, or sneezing") ;
printf("\n16.After handling your mask") ;
printf("\n17.After changing a diaper") ;
printf("\n18.After caring for someone who’s sick") ;
printf("\n19.After touching animals or pets");
printf("\n20.If soap and water are not readily available,") ;
printf("\n21.use a hand sanitizer that contains at least 60 percentage alcohol.") ;
printf("\n22.Cover all surfaces of your hands with the sanitizer and");
printf("\nrub them together until they feel dry.");
printf("\n23.Avoid touching your eyes, nose, and mouth with unwashed hands.");
printf("\n");
printf("\n");
}
void Vaccination()

{
printf("\n");
printf("VACCINATION!!!");
printf("\n");
printf("\n");
printf("\nThe COVID-19 vaccines produce protection against the disease,");
printf("\nas a result of developing an immune response to the SARS-Cov-2 virus.");
printf("\nDeveloping immunity through vaccination means there is a reduced risk");
printf("\nof developing the illness and its consequences. This immunity helps you");
printf("\nfight the virus if exposed. Getting vaccinated may also protect people around you, ");
printf("\nbecause if you are protected from getting infected and from disease,");
printf("\nyou are less likely to infect someone else. ");

printf("\nThis is particularly important to protect people at increased risk ");
printf("\nfor severe illness from COVID-19, such as healthcare providers, ");
printf("\nolder or elderly adults, and people with other medical conditions.");
printf("\n");
printf("\n");
printf("\nbenefits of taking vaccine");
printf("\n1)Pfizer/BioNtech");
printf("\n2)Sll/Covishield");
printf("\n3)AstraZeneca/AZD1222");
printf("\n4)Janssen/Ad25.COV 2.S");
printf("\n5)Moderna COVID-19 vaccine(mRNA 1273)");
printf("\n6)Sinopharm vaccine");
printf("\n7)Sinovac-CoronaVac");
printf("\n8)Sputnik V vaccine");
printf("\n9)Covaxin vaccine");
printf("\n");
printf("\n");
printf("GET VACCINATED!!!");
printf("\n");
printf("\n");

}