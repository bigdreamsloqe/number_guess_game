#include<iostream>
#include<ctime>
#include<cstdlib>
#include <limits>
#define BG_BRIGHT_RED      "\033[101m"
#define BG_BRIGHT_GREEN    "\033[102m"
#define BG_BRIGHT_YELLOW   "\033[103m"
#define BG_BRIGHT_BLUE     "\033[104m"
#define BG_BRIGHT_MAGENTA  "\033[105m"
#define BG_BRIGHT_CYAN     "\033[106m"
#define BG_RED      "\033[41m"
#define BG_GREEN    "\033[42m"
#define BG_YELLOW   "\033[43m"
#define BG_BLUE     "\033[44m"
#define BG_MAGENTA  "\033[45m"
#define BG_CYAN     "\033[46m"
#define BG_BRIGHT_WHITE "\033[107m"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"
#define BLACK    "\033[30m"
#define BLUE     "\033[34m"
#define MAGENTA  "\033[35m"
#define WHITE    "\033[37m"
#define BRIGHT_RED      "\033[91m"
#define BRIGHT_GREEN    "\033[92m"
#define BRIGHT_YELLOW   "\033[93m"
#define BRIGHT_BLUE     "\033[94m"
#define BRIGHT_MAGENTA  "\033[95m"
#define BRIGHT_CYAN     "\033[96m"
#define DIM        "\033[2m"
#define ITALIC     "\033[3m"
#define UNDERLINE  "\033[4m"

int main() {


    int babynear = 3;

    std::cout <<BOLD<<BG_BRIGHT_BLUE<< UNDERLINE<<BRIGHT_YELLOW<<"\t\t\t\t\t\t\t*************NUMBER GUESSING GAME**************\t\t\t\t\t\t\t\t\t\t"<< RESET<<std::endl;
    std::string diff;
    std::cout << BG_BRIGHT_YELLOW<<BLACK<< "                BABY \n                EASY\n                MEDIUM\n                HARD\n                EXPERT\n  Enter difficulty :"<<BG_BRIGHT_WHITE;
    std::getline(std::cin,diff);

    // baby level start

    if (diff == "baby"||diff =="Baby"
        ||diff == "BABY"||diff == "BAby"
        || diff == "BABy"||diff == "bABY"
        ||diff == "baBY"||diff == "babY") {

        std::cout << ITALIC<<BG_BRIGHT_BLUE<<BRIGHT_YELLOW
                  <<"***************** BABY LEVEL *****************"<<std::endl;
        std::cout << "RULES : 1.Guess the number between 1 and 10 \n         2.TAKE YOUR TIME "<<RESET<<std::endl;
        srand(time(NULL));
        int babynum = (rand() % 10) + 1;
        int babyguess;
        int babytries = 0;

       do {

           std::cout << BG_BRIGHT_WHITE<<BLACK<< "Enter guess : ";
           std::cin >> babyguess;

           babytries++;
           int diffr = std::abs(babynum - babyguess);

           if (babyguess < babynum) {
               if (diffr <= babynear) {
                   std::cout <<RESET<<BG_BRIGHT_GREEN<<BLACK<< "Almost but low"<<std::endl;
               }
               else {
                   std::cout <<RESET<< BLACK<<BG_BRIGHT_GREEN<<"too low"<<std::endl;
               }
           }
           else if(babyguess > babynum) {
               if (diffr <= babynear) {
                   std::cout <<RESET<< BG_BRIGHT_RED<<BLACK<<"Almost but high"<<std::endl;
               }
               else {
                   std::cout <<RESET<< BG_BRIGHT_RED<<BLACK <<"Too high"<<std::endl;
               }
           }
           else if (babyguess == babynum){
               switch (babytries) {
                   case 1: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "You are an insane baby level expert"<<std::endl;
                       break;
                   case 2: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "You are baby patrik jane"<<std::endl;
                       break;
                   case 3: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "That's good "<<std::endl;
                       break;
                   default: std::cout << babytries<<" Tries for baby level ?"<<std::endl;
                       break;
               }
               std::cout<<RESET << CYAN<< "You guessed the number "<<RED<<babynum<<CYAN<<" in "<<RED<<babytries<<CYAN<<" tries"<<std::endl;
           }
       }while (babyguess != babynum);


    }//baby level end

    // easy level
    if (diff == "Easy" || diff == "easy" || diff == "EASY" ||
        diff == "EAsy" || diff == "EASy" || diff == "easY" ||
        diff == "eaSY" || diff == "eASY" || diff == "EaSy") {
        int easyguess;
        int easynum;
        int easytries {0};
        int easynear  {4};

        std::cout << ITALIC<<BG_BRIGHT_BLUE<<BRIGHT_YELLOW
                  <<"***************** EASY LEVEL *****************"<<std::endl;
        std::cout << "RULES : 1.Guess the number between 1 and 50 \n         2.TAKE YOUR TIME "<<RESET<<std::endl;


        srand(time(NULL));
        easynum = (rand() % 50) + 1;

        do {
            std::cout <<RESET<< BG_BRIGHT_CYAN<<BLACK<<"Enter guess : ";
            std::cin >> easyguess;
            easytries++;
            int easydiffr = std::abs(easynum - easyguess);

            if (easyguess < easynum) {
                if (easydiffr <= easynear) {
                    std::cout <<RESET<<BG_BRIGHT_GREEN<<BLACK<< "Almost but low"<<std::endl;
                }
                else {
                    std::cout <<RESET<< BLACK<<BG_BRIGHT_GREEN<<"too low"<<std::endl;
                }
            }
            else if (easyguess > easynum) {
                if (easydiffr <= easynear) {
                    std::cout <<RESET<< BG_BRIGHT_RED<<BLACK<<"Almost but high"<<std::endl;
                }
                else {
                    std::cout <<RESET<< BG_BRIGHT_RED<<BLACK <<"Too high"<<std::endl;
                }
            }
            else if (easynum == easyguess) {
                switch (easytries) {
                    case 1: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_YELLOW<< "You are insane easy expert"<<std::endl;
                        break;
                    case 2: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_YELLOW<< "You are easy patrik jane"<<std::endl;
                        break;
                    case 3 : std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_YELLOW<< "Great job !!"<<std::endl;
                        break;
                    default: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_YELLOW<< easytries<<"Tries for easy level ??"<<std::endl;
                        break;
                }
                std::cout <<RESET<<BLACK<<BG_BRIGHT_CYAN<<BOLD<< "You have found "<<" Number " <<easynum<<"in "<< easytries << " tries"<<std::endl;
            }

        }while (easynum != easyguess);

    }// end of easy level

    //medium level
    if (diff == "Medium" || diff == "medium" || diff == "MEDIUM" || diff == "MEdium") {

        std::cout << ITALIC<<BG_BRIGHT_BLUE<<BRIGHT_YELLOW
                  <<"***************** MEDIUM LEVEL *****************"<<std::endl;
        std::cout << "RULES : 1.Guess the number between 1 and 100 \n         2.TAKE YOUR TIME "<<RESET<<std::endl;
        srand(time(NULL));
        int mednum = (rand() % 100) + 1;
        int medguess;
        int medtries;

       do {

           std::cout << BG_BRIGHT_YELLOW<<BLACK<< "Enter guess : ";
           std::cin >> medguess;

           medtries++;
           int middiffr = std::abs(mednum - medguess);

           if (medguess < mednum) {
               if (middiffr <= babynear) {
                   std::cout <<RESET<<BG_BRIGHT_GREEN<<BLACK<< "Almost but low"<<std::endl;
               }
               else {
                   std::cout <<RESET<< BLACK<<BG_BRIGHT_GREEN<<"too low"<<std::endl;
               }
           }
           else if(medguess > mednum) {
               if (middiffr <= babynear) {
                   std::cout <<RESET<< BG_BRIGHT_RED<<BLACK<<"Almost but high"<<std::endl;
               }
               else {
                   std::cout <<RESET<< BG_BRIGHT_RED<<BLACK <<"Too high"<<std::endl;
               }
           }
           else if (medguess == mednum){
               switch (medtries) {
                   case 1: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "You are an insane medium level expert"<<std::endl;
                       break;
                   case 2: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "You are patrik jane"<<std::endl;
                       break;
                   case 3: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "EXCELLENT JOB "<<std::endl;
                       break;
                   case 4 : std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "GREAT JOB "<<std::endl;
                       break;
                   case 5: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "NICE JOB "<<std::endl;
                       break;
                   case 6: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "GOOD "<<std::endl;
                       break;
                   default: std::cout << medtries<<" Tries for MEDIUM level ?"<<std::endl;
                       break;
               }
               std::cout<<RESET << BG_BRIGHT_WHITE<<BRIGHT_YELLOW<< "You guessed the number "<<RED<<mednum<<WHITE<<" in "<<RED<<medtries<<WHITE<<" tries"<<std::endl;
           }
       }while (medguess != mednum);
    }// end of medium level

    //hard level

    if (diff == "HARD" || diff == "Hard" || diff == "hard" || diff == "HArd") {

        std::cout << ITALIC<<BG_BRIGHT_BLUE<<BRIGHT_YELLOW
                  <<"***************** BABY LEVEL *****************"<<std::endl;
        std::cout << "RULES : 1.Guess the number between 1 and 500 \n         2.TAKE YOUR TIME "<<RESET<<std::endl;
        srand(time(NULL));
        int hardnum = (rand() % 500) + 1;
        int hardguess;
        int hardtries = 0;

       do {

           std::cout << BG_BRIGHT_WHITE<<BLACK<< "Enter guess : "<<RESET;
           std::cin >> hardguess;

           hardtries++;
           int harddiffr = std::abs(hardnum - hardguess);

           if (hardguess < hardnum) {
               if (harddiffr <= babynear) {
                   std::cout <<RESET<<BG_BRIGHT_GREEN<<BLACK<< "Almost but low"<<std::endl;
               }
               else {
                   std::cout <<RESET<< BLACK<<BG_BRIGHT_GREEN<<"too low"<<std::endl;
               }
           }
           else if(hardguess > hardnum) {
               if (harddiffr <= babynear) {
                   std::cout <<RESET<< BG_BRIGHT_RED<<BLACK<<"Almost but high"<<std::endl;
               }
               else {
                   std::cout <<RESET<< BG_BRIGHT_RED<<BLACK <<"Too high"<<std::endl;
               }
           }
           else if (hardguess == hardnum){
               switch (hardtries) {
                   case 1: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "ARE YOU EVEN HUMAN ??"<<RESET<<std::endl;
                       break;
                   case 2: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "ARE YOU EVEN HUMAN"<<RESET<<std::endl;
                       break;
                   case 3: std::cout <<RESET<<ITALIC<<BLACK<<BG_BRIGHT_MAGENTA<< "HATS OFF BRO  "<<RESET<<std::endl;
                       break;

               }
               std::cout<<RESET << BG_BRIGHT_WHITE<< GREEN<< "You guessed the number "<<RED<<hardnum<<GREEN<<" in "<<RED<<hardtries<<GREEN<<" tries"<<std::endl;
               std::cout <<RESET<<BRIGHT_MAGENTA<<"                      A ROSE FOR YOUR GAMEPLAY                        ";
           }
       }while (hardguess != hardnum);
    } //END OF HARD

    //EXTREME  START

    if (diff == "Expert" || diff == "EXPERT" || diff == "expert") {


        std::cout << ITALIC<<BG_BRIGHT_BLUE<<BRIGHT_YELLOW
                  <<"***************** EXTREME LEVEL *****************"<<std::endl;
        std::cout << "RULES : 1.Guess the number between 1 and 10000 \n         2.TAKE YOUR TIME "<<RESET<<std::endl;
        srand(time(NULL));
        int exnum = (rand() % 10000) + 1;
        int exguess;
        int extries = 0;

       do {

           std::cout << BG_BRIGHT_WHITE<<BLACK<< "Enter guess : ";
           std::cin >> exguess;

           extries++;
           int exdiffr = std::abs(exnum - exguess);

           if (exguess < exnum) {
               if (exdiffr <= babynear) {
                   std::cout <<RESET<<BG_BRIGHT_GREEN<<BLACK<< "Almost but low"<<std::endl;
               }
               else {
                   std::cout <<RESET<< BLACK<<BG_BRIGHT_GREEN<<"too low"<<std::endl;
               }
           }
           else if(exguess > exnum) {
               if (exdiffr <= babynear) {
                   std::cout <<RESET<< BG_BRIGHT_RED<<BLACK<<"Almost but high"<<std::endl;
               }
               else {
                   std::cout <<RESET<< BG_BRIGHT_RED<<BLACK <<"Too high"<<std::endl;
               }
           }
           else if (exguess == exnum){
               std::cout<<RESET << BG_BRIGHT_WHITE<< GREEN<< "You guessed the number "<<RED<<exnum<<GREEN<<" in "<<RED<<extries<<GREEN<<" tries"<<std::endl;
               std::cout << "\n                             INFINITE SALUTATIONS FOR YOUR GAMEPLAY                            \n";
           }
       }while (exguess != exnum);
    }
    std::cout << "press enter to exit"<<std::endl;
    std::cin.ignore(10000 , '\n');
    std::cin.get();
return 0;

}