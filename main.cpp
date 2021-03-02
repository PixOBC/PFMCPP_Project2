#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
int
float
double 
bool
char
unsigned int
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int rainDrops = 45;    
    int cows = 100;
    int planets = 8;

    float numSamplesToRender = 56000.0f;
    float decibelsToGain = 0.5f;
    float ageOfMySonInYears = 3.5f;

    double lightYearsToAlienLife = 123670978.454;
    double slicesOfCakeLeftInMyHouse = 0.0002;
    double percentageOfWheelsOnBrokenCar = 0.75;

    bool rainToday = true;
    bool rainedLastFriday = false;
    bool rainTomorrow = false;

    char plantInitial = 'O';
    char mySurnameInitial = 'P';
    char avgSchoolGrade = 'B';

    unsigned int semiTonesInOctave = 12;
    unsigned int sumTwoRandomValues = 24 + 10;
    unsigned int major7 = 11;

    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(number, rainDrops, cows, planets, numSamplesToRender, decibelsToGain, ageOfMySonInYears, lightYearsToAlienLife, slicesOfCakeLeftInMyHouse, percentageOfWheelsOnBrokenCar, rainToday, rainedLastFriday, rainTomorrow, plantInitial, mySurnameInitial, avgSchoolGrade, semiTonesInOctave, sumTwoRandomValues, major7);
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
 char teleportLocationCodeLetter(int longitude, int latitude)
 {
     ignoreUnused(longitude, latitude);
     return {};
 } 

/*
 2)
 */
 float delayTimeInSamples(float delayTimeInSeconds = 0.5f, int sampleRate = 44100)
 {
     ignoreUnused(delayTimeInSeconds, sampleRate);
     return {};
 }


/*
 3)
 */
 double squareRoot(int numToSquare)
 {
     ignoreUnused(numToSquare);
     return {};
 }

/*
 4)
 */
 char postionInQueue(char lastNameInitial)
 {
    ignoreUnused(lastNameInitial);
    return {};
 }

/*
 5)
 */
 int daysLeftInTheYear(int daysInTheYearGone, int numDaysInThisYear = 365)
 {
    ignoreUnused(daysInTheYearGone, numDaysInThisYear);
    return {};
 }

/*
 6)
 */
 unsigned int yourAge(int yearOfBirth, int monthNumber, int year = 2021)
 {
    ignoreUnused(yearOfBirth, monthNumber);
    return {};
 }

/*
 7)
 */
 bool legalToDrink(int age, int countryCode)
 {
    ignoreUnused(age, countryCode);
    return {};
 }

/*
 8)
 */
 float fractionOfPieLeft(int numPieSlicesInWholePie, int pieSlicesEaten)
 {
    ignoreUnused(numPieSlicesInWholePie, pieSlicesEaten);
    return {};
 }

/*
 9)
 */
 bool metalDetected(bool isItemMetal, double weightOfItemInGrams)
 {
    ignoreUnused(isItemMetal, weightOfItemInGrams);
    return {};
 }

/*
 10)
 */
 double speedOfReentry(double atmosDensity, double heatOfVessel)
 {
    ignoreUnused(atmosDensity, heatOfVessel);
    return {};
 }


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

/*
 5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

 
int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    ignoreUnused(carRented);
    
    //1)
    auto teleportLocation = teleportLocationCodeLetter(27, 67);
    ignoreUnused(teleportLocation);
    //2)
    auto delayInTime = delayTimeInSamples();
    ignoreUnused(delayInTime);
    
    //3)
    auto squareRootIn = squareRoot(64);
    ignoreUnused(squareRootIn);
    
    //4)
    auto queuelist = postionInQueue('P');
    ignoreUnused(queuelist);
    
    //5)
    auto planner = daysLeftInTheYear(49); 
    ignoreUnused(planner);   
    
    //6)
    auto avatar = yourAge(1642, 11);
    ignoreUnused(avatar);  
    
    //7)
    auto ageTest = legalToDrink(18, 3);
    ignoreUnused(ageTest);
    
    //8)
    auto pieCalculation = fractionOfPieLeft(8, 2);
    ignoreUnused(pieCalculation);
    
    //9)
     auto possibleTreasure = metalDetected(true, 25.7);
     ignoreUnused(possibleTreasure);
    
    //10)
    auto rocketSafetyCheck = speedOfReentry(1.2, 1349);
    ignoreUnused(rocketSafetyCheck);  
    
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
