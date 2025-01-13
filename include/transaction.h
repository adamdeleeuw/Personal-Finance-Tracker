#ifndef TRANSACTION_H
#define TRANSACTION_H

#define MAX_TRANSACTIONS 1000 // Maximum number of transactions to store
#define MAX_DESC_LENGTH 100   // Maximum length for the description field
#define MAX_DATE_LENGTH 20    // Maximum length for the date field

// Structure to store individual transaction details
typedef struct transaction {
    char date[MAX_DATE_LENGTH];   // Date of the transaction (e.g., "2025-01-02")
    char description[MAX_DESC_LENGTH]; // Description of the transaction
    double amount;                // Transaction amount (positive for credit, negative for debit)
    char type[20];                // Type of transaction (e.g., "DEBIT", "CREDIT")
} transaction_t;

// Structure to store all transactions for the session
typedef struct transaction_list {
    transaction_t transactions[MAX_TRANSACTIONS]; // Array to hold transactions
    int count;                                    // Number of transactions currently stored
} transaction_list_t;

// Function prototypes

// Parsing and Storing
void loadTransactionsFromPDF(const char pdfFilePath[], transaction_list_t *list);

// Data Summaries and Analysis
void summarizeExpenses(const transaction_list_t *list, double *totalExpenses);
void summarizeIncome(const transaction_list_t *list, double *totalIncome);
void calculateProfit(const transaction_list_t *list, double *profit);
void generateTrendsReport(const transaction_list_t *list, const char startDate[], const char endDate[]);

// Utility Functions
void printAllTransactions(const transaction_list_t *list);
double calculateTotal(const transaction_list_t *list, const char *type);

#endif // TRANSACTION_H