#include<iostream>

using std::cout, std::endl;

struct Daphine {
    int original_investment; 
    double intrest_rate;
    int money_now;
};

struct Cleo {
    int original_investment;
    double intrest_rate; 
    double money_now;
};

int main() {
    Daphine account_D;
    Cleo account_C;
    account_D.original_investment = 100;
    account_D.intrest_rate = 0.1;
    account_D.money_now = account_D.original_investment;
    account_C.original_investment = 100;
    account_C.intrest_rate = 0.05;
    account_C.money_now = (double) account_C.original_investment;
    int years = 0;
    for (years = 0; account_C.money_now <= account_D.money_now; years++) {
        account_D.money_now += account_D.intrest_rate * account_D.original_investment;
        account_C.money_now += account_C.intrest_rate * account_C.money_now;
        printf("%d year: \n", (years+1));
        cout << "Cleo's investment now: " << account_C.money_now << endl;
        cout << "Daphine's investment now: " << account_D.money_now << endl;
        cout << endl;
    }
    cout << "Cleo's investment exceed Daphine's after " << years << " years." << endl;
    cout << "Cleo's investment now: " << account_C.money_now << endl;
    cout << "Daphine's investment now: " << account_D.money_now << endl;
    return 0;
}
