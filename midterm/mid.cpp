// File: "mid.cpp" 

#include <iostream> 
#include <fstream> 
#include <iomanip> 
#include <stdio.h> 
#include <string.h> 

using namespace std; 

// Program to convert Celsius to Farenheit 
// Formula: Fahrenheit (*F) = (Celsius x 1.8) + 32; 
// Example range: 35 - 37 35


void writeToConsoleAndFileCStyle (int start, int end) { 
   FILE* cfPtr; 
   printf("%15s %15s\n", "Celsius", "Fahrenheit"); 
   // TO DO 

   // Create "data.txt" and open 
   cfPtr = fopen("data.txt", "w");  
 
   if(cfPtr != NULL){ 

      // Write header for "data1.txt"
      fprintf(cfPtr, "%15s %15s\n", "Celsius", "Fahrenheit"); 

      // Create a loop for the range. 
      for(int celsius = start; celsius <= end; celsius++){ 

         float fahrenheit; 

         // Convert Celsius to Farenheit. 
         // Formula: Fahrenheit (*F) = (Celsius x 1.8) + 32; 
         fahrenheit = (celsius * 1.8) + 32; 
    
         // Output results to the console. 
         printf("%15d", celsius); 
         printf("%15.1f\n", fahrenheit);
  
         // function will write to the file "data1.txt"  
         fprintf(cfPtr, "%15d", celsius); 
         fprintf(cfPtr, "%15.1f\n", fahrenheit); 
      }
      // Close "data1.txt" 
      fclose(cfPtr);  

   } else {
      printf ("Unable to open file"); 
   } 
} 

void writeToConsoleAndFileCPlusPlusStyle (int start, int end) { 
   ofstream outputFile; 
   cout << setw(15) << "Celsius" << setw(15) << "Fahrenheit" << endl; 
   // TO DO 

   // Create "data1.txt" and open 
   outputFile.open("data1.txt"); 
 
   if(outputFile.is_open()){

      // Write header for "data1.txt"
      outputFile << setw(15) << "Celsius" << setw(15) << "Fahrenheit" << endl;

      // Create a loop for the range. 
      for(int celsius = start; celsius <= end; celsius++){ 
         float fahrenheit; 

         // Convert Celsius to Farenheit. 
         // Formula: Fahrenheit (*F) = (Celsius x 1.8) + 32; 
         fahrenheit = (celsius * 1.8) + 32; 
      
         // Output results to the console. 
         cout << setw(15) << celsius; 
         cout << setw(15) << setprecision(1) << fixed << showpoint << fahrenheit << endl; 
  
         // function will write to the file "data1.txt"  
         outputFile << setw(15) << celsius; 
         outputFile << setw(15) << setprecision(1) << fixed << showpoint << fahrenheit << endl; 
      }
      // Close "data1.txt" 
      outputFile.close(); 

   } else {
      cout << "Unable to open file"; 
   } 
} 

int main () { 
   int start; 
   int end; 
   cout << "Enter the start of range:"; 
   cin >> start; 
   cout << "Enter the end of range:"; 
   cin >> end; 
   writeToConsoleAndFileCStyle (start, end); 
   writeToConsoleAndFileCPlusPlusStyle (start, end);
} 

