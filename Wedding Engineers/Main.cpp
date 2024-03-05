#include <chrono>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

string getCurrentDate()
{
    time_t now = time(0);
    tm *localTime = localtime(&now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%d/%m/%Y", localTime); // Format: DD/MM/YYYY
    return string(buffer);
}

string getCurrentTime()
{
    time_t now = time(0);
    tm *localTime = localtime(&now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%H:%M:%S", localTime); // Format: HH:MM:SS
    return string(buffer);
}

string getCurrentDay()
{
    time_t now = time(0);
    tm *localTime = localtime(&now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%a", localTime); // Format: Day of the week (short name)
    return string(buffer);
}

const int MAX_RECORDS = 100;
class Anukool;
class Himanshu; // Forward declaration
class Ujjwal;

class Anukool
{
private:
    struct DivorceDetails
    {
        string divorceId;
        string groomName;
        string brideName;
        string divorceDate;
        string divorceTime;
        string divorceDay;
    };

    DivorceDetails divorceRegistry[MAX_RECORDS];
    double divorcePriceFromHimanshu = 400;
    double divorcePriceOther = 500;
    int divorseRegisterCounter = 0;
    int totalDivorceCounterFromHimanshu = 0;
    int totalDivorceCounterOther = 0;
    int DivorseId = 1; // Initialize DivorseId here
    string myID = "Sigma@007";

public:
    Anukool()
    {
        for (int i = 0; i < MAX_RECORDS; ++i)
        {
            divorceRegistry[i] = {}; // Initialize all elements to empty
        }
    }
    void Divorce_Register()
    {
        for (int i = 0; i < divorseRegisterCounter; i++)
        {
            cout << "Divorce ID : " << divorceRegistry[i].divorceId << endl;
            cout << "Groom's Name : " << divorceRegistry[i].groomName << endl;
            cout << "Bride's Name : " << divorceRegistry[i].brideName << endl;
            cout << "Date : " << divorceRegistry[i].divorceDate << endl;
            cout << "Time : " << divorceRegistry[i].divorceTime << endl;
            cout << "Day : " << divorceRegistry[i].divorceDay << endl
                 << endl;
        }
        cout << "\nTotal marriage :" << divorseRegisterCounter << endl;
    }
    void description()
    {
        cout << "Advocate Anukool Pandey \n";
        cout << "Acadimic Details: "
                " \nLLB from Harvad Universuty \n ";
        cout << "Sucessfull Divorce : "
                "100000+\n";
    }
    int income()
    {
        return (totalDivorceCounterFromHimanshu*divorcePriceFromHimanshu)+(totalDivorceCounterOther*divorcePriceOther);
    }
    bool verifyDivorseManager(string id)
    {
        if (id == myID)
        {
            return true;
        }
        return false;
    }

    void registerDivorce(Himanshu &h);

    bool checkDivorceFromAnukool(const string &divorceId)
    {
        for (int i = 0; i < divorseRegisterCounter; ++i)
        {
            if (divorceRegistry[i].divorceId == divorceId)
            {
                return true;
            }
        }
        return false;
    }

    // Additional getters to access divorce details
    const DivorceDetails &getDivorceDetails(const string &divorceId) const
    {
        for (int i = 0; i < divorseRegisterCounter; ++i)
        {
            if (divorceRegistry[i].divorceId == divorceId)
            {
                return divorceRegistry[i];
            }
        }
        throw runtime_error("Divorce ID not found");
    }

    double getDivorsePrice()
    {
        return divorcePriceOther;
    }
    // friend void Himanshu::registerRemarraige(Anukool &a);
    friend void calculateIncome(Himanshu &, Anukool &);
    friend class Ujjwal;
};

class Himanshu
{
private:
    struct MarriageDetails
    {
        string marriageId;
        string groomName;
        string brideName;
        string marriageDate;
        string marriageTime;
        string marriageDay;
    };
    struct remarriageDetails
    {
        string remarriageId;
        string groomName;
        string brideName;
        string remarriageDate;
        string remarriageTime;
        string remarriageDay;
    };
    MarriageDetails marriageRegistry[MAX_RECORDS];
    remarriageDetails remarriageRegistry[MAX_RECORDS];
    double marriagePrice = 500;
    int totalMarriageCounter = 0;
    int remarriageCounter = 0 ;
    int remarriageCounterFromAnukool = 0;
    int remarriageCounterOther = 0;
    
    int RemarriageId = 1;
    string myId = "Himanshu@123";

public:
    Himanshu() = default;
    double remarriagePriceFromAnukool = 400;
    double remarriagePriceOther = 300;
    void recordMarriage(const string &marriageId, const string &groomName, const string &brideName)
    {
        marriageRegistry[totalMarriageCounter++] = {marriageId, groomName, brideName, getCurrentDate(), getCurrentTime(), getCurrentDay()};
        cout << "ॐ  मंगलम भगवान विष्ण  मंगलम गरुणध्वजयः मंगलाये कुंदरिकायक्षे मंगलाये तनोहरी \n"
             << "काशी का ये सिद्ध ब्राहमण अपने सत्कर्मों को साक्षी मानकर \n वर वधू के शुभ वैवाहिक जीवन की मंगल कामना करता है \n "
             << "विवाह सम्पन्न हुआ \n हर हर महादेव \n ";
    }

    bool verifyWeddingManager(string id)
    {
        if (id == myId)
        {
            return true;
        }
        return false;
    }

    void Descripton()
    {
        cout << "पंडित जी का नाम : श्री श्री हिमांशु मिश्रा ( काशी वाले ) \n";
        cout << "Acadimic Details: "
                " \n PHD in sanskrit from Ganga kinare \n PDH in Astrology from BHU \n B.tech in computer science from PU\n ";
        cout << "Experiance: "
                "200 year+ \n";
        cout << "Total successful mariage :"
                " 111110011110110\n";
    }

    bool checkMarriageRecord(const string &marriageId) const
    {
        for (int i = 0; i < totalMarriageCounter; ++i)
        {
            if (marriageRegistry[i].marriageId == marriageId)
            {
                return true;
            }
        }
        return false;
    }

    const MarriageDetails &getMarriageDetails(const string &marriageId) const
    {
        for (int i = 0; i < totalMarriageCounter; ++i)
        {
            if (marriageRegistry[i].marriageId == marriageId)
            {
                return marriageRegistry[i];
            }
        }
        throw runtime_error("Marriage ID not found");
    }

    double getMarriagePrice()
    {
        return marriagePrice;
    }
    void getdataofMarraige()
    {
        for (int i = 0; i < totalMarriageCounter; i++)
        {
            cout << "Marriage ID : " << marriageRegistry[i].marriageId << endl;
            cout << "Groom's Name : " << marriageRegistry[i].groomName << endl;
            cout << "Bride's Name : " << marriageRegistry[i].brideName << endl;
            cout << "Date : " << marriageRegistry[i].marriageDate << endl;
            cout << "Time : " << marriageRegistry[i].marriageTime << endl;
            cout << "Day : " << marriageRegistry[i].marriageDay << endl
                 << endl;
        }
        cout << "\nTotal marriage :" << totalMarriageCounter << endl;
    }
    int total_income()
    {
       return (marriagePrice*totalMarriageCounter)+(remarriageCounterFromAnukool*remarriagePriceFromAnukool)+(remarriageCounterOther*remarriagePriceOther);
    }
    void registerRemarraige(Anukool &a);
    void remarriage(){
        for (int i = 0; i < remarriageCounter; i++)
        {
            cout << "Marriage ID : " << remarriageRegistry[i].remarriageId << endl;
            cout << "Groom's Name : " << remarriageRegistry[i].groomName << endl;
            cout << "Bride's Name : " << remarriageRegistry[i].brideName << endl;
            cout << "Date : " << remarriageRegistry[i].remarriageDate << endl;
            cout << "Time : " << remarriageRegistry[i].remarriageTime << endl;
            cout << "Day : " << remarriageRegistry[i].remarriageDay << endl
                 << endl;
        }
        cout << "\nTotal remarriage :" << remarriageCounter << endl;
    }
    friend void calculateIncome(Himanshu &, Anukool &);
    friend void Anukool::registerDivorce(Himanshu &h);
    friend class Ujjwal;
};

class Ujjwal
{
    double totalIncomeByMarriage = 0;
    double totalIncomeByReMarriage = 0;
    int totalRemarriageCounter = 0;
    int totalSuccessMarriage = 0;
    double TotalIncomeByDivorse = 0;
    int totalSuccessDivorse = 0;
    string myId = "Ujjwal@123";

public:
    bool verifyFinanceManager(string id)
    {
        if (id == myId)
        {
            
            return true;
        }
        return false;
    }

    void calculateFinance(Himanshu &h, Anukool &a)
    {
        // Income by himanshu
        totalIncomeByMarriage = h.totalMarriageCounter * h.marriagePrice;
        totalIncomeByReMarriage = h.remarriageCounterFromAnukool * h.remarriagePriceFromAnukool + h.remarriageCounterOther * h.remarriagePriceOther;
        totalRemarriageCounter = 0;
        totalSuccessMarriage = h.totalMarriageCounter;

        // Income by Anukool
        TotalIncomeByDivorse = a.totalDivorceCounterFromHimanshu * a.divorcePriceFromHimanshu + a.totalDivorceCounterOther * a.divorcePriceOther;
        totalSuccessDivorse = a.divorseRegisterCounter;

        int financeManagerChoice;
        do
        {
            cout << "\n Finance Manager Options:\n";
            cout << "1. Show Marriage Income Details \n";
            cout << "2. Show Divorse  Income Details \n";
            cout << "3. Exit\n";
            cout << "Enter your choice: ";

            cin >> financeManagerChoice;
            if (financeManagerChoice == 1)
            {
                showMarriageDetails();
            }

            else if (financeManagerChoice == 2)
            {
                showDivorseDetails();
            }

            else if (financeManagerChoice == 3)
            {
                cout << "Exiting...\n";
            }
            else
            {
                cout << "Invalid Choice , try again ...\n";
            }

        } while (financeManagerChoice != 3);
        cout << endl
             << endl;
    }

    void showMarriageDetails()
    {
        cout << "Total Successfull Marriage : " << totalSuccessMarriage << endl;
        cout << "Total income from Marriage is : " << totalIncomeByMarriage << endl;
        cout << "Total income from Remarriage is : " << totalIncomeByReMarriage << endl;
    }
    
    void showDivorseDetails()
    {
        cout << "Total Successfull Divorse : " << totalSuccessDivorse << endl;
        cout << "Total income from Divorse is : " << TotalIncomeByDivorse << endl;
    }
};
void Himanshu::registerRemarraige(Anukool &a){
    string divorceId;
    cout << "Enter Your Divorce ID: ";
    cin >> divorceId;
    if (a.checkDivorceFromAnukool(divorceId))
    {
        string RemarriageID, groomName, brideName;
        cout << "Enter Remarriage ID: ";
        cin >> RemarriageID;
        cout << "Enter Groom's Name: ";
        getline(cin,groomName);
        cout << "Enter Bride's Name: ";
        getline(cin,brideName);

        remarriageRegistry[remarriageCounter++] = {RemarriageID, groomName, brideName, getCurrentDate(), getCurrentTime(), ""}; // Placeholder value for remarriage day
        remarriageCounterFromAnukool++;

        cout << " \n ------>>  Remarriage  Description <<------ " << endl;
        cout << " Bride Name : " << brideName << endl;
        cout << " Groome Name : " << groomName << endl;
        cout << "Remarriage ID: " << RemarriageID << endl;
        cout << "Remarriage Date: " << getCurrentDate() << endl;
        cout << "Remarriage Time: " << getCurrentTime() << endl;
        cout << "Remarriage Day: " << getCurrentDay() << endl;
        cout << "Status : Registered successfully!\n";
        cout << "Thanks for Our Services " << endl;
    }
    else
    {
        string RemarriageID, groomName, brideName;
        cout << "Enter Remarriage ID: ";
        getline(cin , RemarriageID);
        cout << "Enter Groom's Name: ";
        getline(cin , groomName);
        cout << "Enter Bride's Name: ";
        getline(cin , brideName);

        remarriageRegistry[remarriageCounter++] = {RemarriageID, groomName, brideName, getCurrentDate(), getCurrentTime(), ""}; // Placeholder value for divorce day
        remarriageCounterOther++;

        cout << " \n ------>>  Remarriage  Description <<------ " << endl;
        cout << " Bride Name : " << brideName << endl;
        cout << " Groome Name : " << groomName << endl;
        cout << "Remarriage ID: " << RemarriageID << endl;
        cout << "Remarriage Date: " << getCurrentDate() << endl;
        cout << "Remarriage Time: " << getCurrentTime() << endl;
        cout << "Remarriage Day: " << getCurrentDay() << endl;
        cout << "Status : Registered successfully!\n";
    }
}
void Anukool::registerDivorce(Himanshu &h)
{
    string marriageId;
    cout << "Enter Your Marriage ID: ";
    cin >> marriageId;
    if (h.checkMarriageRecord(marriageId))
    {

        const Himanshu::MarriageDetails &marriageDetails = h.getMarriageDetails(marriageId);
        divorceRegistry[divorseRegisterCounter++] = {to_string(DivorseId++), marriageDetails.groomName, marriageDetails.brideName, getCurrentDate(), getCurrentTime(), getCurrentDay()};
        totalDivorceCounterFromHimanshu++;
        cout << " \n ------>>  Divorse  Description <<------ " << endl;
        cout << " Bride Name : " << marriageDetails.brideName << endl;
        cout << " Groome Name : " << marriageDetails.groomName << endl;
        cout << "Divorse ID: " << DivorseId << endl;
        cout << "Divorce Date: " << getCurrentDate() << endl;
        cout << "Divorce Time: " << getCurrentTime() << endl;
        cout << "Divorce Day: " << getCurrentDay() << endl;
        cout << "Status : Registered successfully!\n";
        cout << "Thanks for Our Services " << endl;
    }
    else
    {
        string divorceID, groomName, brideName;
        cout << "Enter Divorce ID: ";
        cin >> divorceID;
        cout << "Enter Groom's Name: ";
        getline(cin , groomName);
        cout << "Enter Bride's Name: ";
        getline(cin, brideName);

        divorceRegistry[divorseRegisterCounter++] = {divorceID, groomName, brideName, getCurrentDate(), getCurrentTime(), ""}; // Placeholder value for divorce day
        totalDivorceCounterOther++;

        cout << " \n ------>>  Divorse  Description <<------ " << endl;
        cout << " Bride Name : " << brideName << endl;
        cout << " Groome Name : " << groomName << endl;
        cout << "Divorse ID: " << divorceID << endl;
        cout << "Divorce Date: " << getCurrentDate() << endl;
        cout << "Divorce Time: " << getCurrentTime() << endl;
        cout << "Divorce Day: " << getCurrentDay() << endl;
        cout << "Status : Registered successfully!\n";
    }
}

void calculateIncome(Himanshu &h1, Anukool &a1)
{
    int totalIncome = h1.marriagePrice * h1.totalMarriageCounter + h1.remarriagePriceOther * h1.remarriageCounterOther + h1.remarriageCounterFromAnukool * h1.remarriagePriceFromAnukool + a1.divorcePriceOther * a1.totalDivorceCounterOther + a1.divorcePriceFromHimanshu * a1.totalDivorceCounterFromHimanshu;
    cout << "Total Income: " << totalIncome << endl;
}

void showCustomerOptions();
void showAdminOptions();

int main()
{
    Himanshu himanshu; // Price for marriage, remarriage price from Anukool, remarriage price from others
    Anukool anukool;   // Price for other divorce, Price for divorce from Himanshu
    Ujjwal ujjwal;

    int choice;
    string userType;
    do
    {
        cout << "Define yourself:\n";
        cout << "1. Customer\n";
        cout << "2. Admin\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> userType;

        if (userType == "1")
        {
            do
            {
                cout << "\nMenu:\n";
                cout << "1. Get Married\n";
                cout << "2. Get Divorced\n";
                cout << "3. Want to Get Remarried\n";
                cout << "4. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                {
                    cout << "\nFee for Marriage: $" << himanshu.getMarriagePrice() << endl;
                    himanshu.Descripton();

                    char continueOption;
                    cout << "Do you want to continue for marriage? (Y/N): ";
                    cin >> continueOption;
                    if (continueOption == 'Y' || continueOption == 'y')
                    {
                        string marriageId, groomName, brideName;
                        cout << "Enter Marriage ID: ";
                        cin >> marriageId;
                        cout << "Enter Groom's Name: ";
                        cin >> groomName;
                        cout << "Enter Bride's Name: ";
                        cin >> brideName;
                        himanshu.recordMarriage(marriageId, groomName, brideName);
                        cout << "Marriage Description : " << endl;
                        cout << " Bride Name : " << brideName << endl;
                        cout << " Groome Name : " << groomName << endl;
                        cout << "Marriage ID: " << marriageId << endl;

                        cout << "Marriage Date: " << getCurrentDate() << endl;
                        cout << "Marriage Time: " << getCurrentTime() << endl;
                        cout << "Marriage Day: " << getCurrentDay() << endl;
                        cout << "Status : Registered successfully!\n";
                    }
                    break;
                }
                case 2:
                    cout << "\nFee for Divorce: $" << anukool.getDivorsePrice() << endl;
                       anukool.description();  
                    char continueOption;
                    cout << "Do you want to continue for Divorse ? (Y/N): ";
                    cin >> continueOption;
                    if (continueOption == 'y' || continueOption == 'Y')
                        anukool.registerDivorce(himanshu);

                    break;
                case 3:
                cout << "\nFee for Remarriage: $" << himanshu.remarriagePriceOther << " (other), $" << himanshu.remarriagePriceFromAnukool << " (from Anukool)\n";
                cout << "Service Description: Arrange a remarriage ceremony\n";
                cout << "Do you want to continue for Remarriage ? (Y/N): ";
                cin >> continueOption;
                if (continueOption == 'y' || continueOption == 'Y')
                    himanshu.registerRemarraige(anukool);
                break;
                case 4:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
                    break;
                }
            } while (choice != 4);
            cout << endl
                 << endl;
        }

        else if (userType == "2")
        {
            string adminChoice;
            do
            {
                cout << "\nChoose Your profession:\n";
                cout << "1. Wedding Manager\n";
                cout << "2. Divorce Manager\n";
                cout << "3. Finance Manager\n";
                cout << "4. Exit\n";
                cout << "Enter your choice: ";
                cin >> adminChoice;

                if (adminChoice == "1")
                {
                    // Wedding Manager
                    string id;
                    cout << "Enter your System ID: ";
                    cin >> id;
                    if (himanshu.verifyWeddingManager(id))
                    {
                        cout << "\nWedding Manager Options:\n";
                        int weddingManagerChoice;
                        do
                        {
                            cout << "1. Show Marriage Register\n";
                            cout << "2. Show Total Income\n";
                            cout << "3. Exit\n";
                            cout << "Enter your choice: ";

                            cin >> weddingManagerChoice;
                            if (weddingManagerChoice == 1)
                            {
                                cout << "Register For First Time Marriage" << endl;
                                himanshu.getdataofMarraige();
                                cout << "Register For Remarriage" << endl;
                                himanshu.remarriage();
                                // Show Marriage Register
                                // Display marriage ID, name, date, and time
                            }
                            else if (weddingManagerChoice == 2)
                            {
                                // Show Total Income
                                // calculateIncome(himanshu, anukool);
                                cout<<"\nTotal Income : "<<himanshu.total_income()<<endl;
                            }
                            else if (weddingManagerChoice == 3)
                            {
                                cout << "Exiting...\n";
                            }
                            else
                            {
                                cout << "Invalid choice. Please try again.\n";
                            }
                        } while (weddingManagerChoice != 3);
                        cout << endl
                             << endl;
                    }
                    else
                    {
                        cout << "Invalid ID !!" << endl;
                    }
                }
                else if (adminChoice == "2")
                {
                    string id;
                    cout << "Enter your System ID: ";
                    cin >> id;
                    if (anukool.verifyDivorseManager(id))

                    {
                        int divorseManagerChoice;
                        do
                        {
                            cout << "\nDivorse Manager Options:\n";
                            cout << "1. Show Divorse Register\n";
                            cout << "2. Show Total Income\n";
                            cout << "3. Exit\n";
                            cout << "Enter your choice: ";

                            cin >> divorseManagerChoice;
                            if (divorseManagerChoice == 1)
                            {
                                // Show Divorse  Register
                                // Display Divorse  ID, name, date, and time
                                anukool.Divorce_Register();
                            }
                            else if (divorseManagerChoice == 2)
                            {
                                // Show Total Income
                                // ujjwal.calculateFinance(himanshu, anukool);
                                cout<<"Divorce Income : "<<anukool.income();
                            }
                            else if (divorseManagerChoice == 3)
                            {
                                cout << "Exiting...\n";
                            }
                            else
                            {

                                cout << "Invalid choice. Please try again.\n";
                            }
                        } while (divorseManagerChoice != 3);
                        cout << endl
                             << endl;
                    }
                    else
                    {
                        cout << "Invalid ID !!" << endl;
                    }
                }
                else if (adminChoice == "3")
                {

                    string id;
                    cout << "Enter your System ID: ";
                    cin >> id;
                    if (ujjwal.verifyFinanceManager(id))
                    {
                        ujjwal.calculateFinance(himanshu, anukool);
                    }
                    else
                    {
                        cout << "INVALID ID !!" << endl;
                    }
                }
                else if (adminChoice == "4")
                {
                    cout << "Exiting...\n";
                    break;
                }
                else
                {
                    cout << "Invalid choice. Please try again.\n";
                }
            } while (adminChoice != "4");
            cout << endl
                 << endl;
        }
        else if (userType == "3")
        {
            cout << "Exiting...\n";
        }

        else
            cout << "Invalid choice. Please run the program again.\n";
    } while (userType != "3");
    cout << endl
         << endl;

    return 0;
}