# Bank Account Management System

## Overview
This project is a C++ program that simulates basic banking operations. It allows you to create and manage bank accounts, perform deposits, withdrawals, and transfers, and view account details. The system ensures secure and efficient handling of all transactions.

## Features
- 🏦 Account Creation and Management
- 💰 Deposit Operations
- 💸 Withdrawal Processing
- 🔄 Inter-Account Transfers
- 📊 Account Details Display
- ✅ Transaction Validation
- 🛡️ Balance Protection

## Class Structure
The `Account` class includes:
- Private member variables for account security
- Getter and setter methods for controlled access
- Transaction methods for banking operations
- Detailed account information display

## Operations
1. **Deposit**
   - Validates deposit amount
   - Updates account balance
   - Confirms successful transaction

2. **Withdrawal**
   - Checks balance sufficiency
   - Validates withdrawal amount
   - Updates account balance
   - Returns transaction status

3. **Transfer**
   - Validates transfer amount
   - Processes inter-account transfers
   - Ensures transaction security
   - Confirms successful transfer

4. **Account Details**
   - Displays account holder name
   - Shows account number
   - Presents current balance
   - Lists account type

## Usage Example
```cpp
// Create accounts
Account account1( "MD. Ahnaf Hossain", 57370, 1000.00, "Savings" );
Account account2( "Pulok Shahriar", 24567, 5000.00, "Savings" );

// Perform operations
account1.deposit(4500);
account1.withdraw(2000);
account1.transferMoney(1000, account2);
account1.showAccountDetails();
account2.showAccountDetails();
```

## Installation and Running the Program
1. **Clone the repository**
    ```bash
    git clone https://github.com/ahnaf-hossain2/Bank-Account-Management-System.git
2. **Compile the code**
    ```bash
    g++ bank_account_system.cpp -o bank_system
3. **Run the executable**
    ```bash
    ./bank_system

## Requirements
* C++ Compiler (GCC recommended)
* Standard C++ Library

## Contributing
1. **Fork the repository**
2. **Create your feature branch**
3. **Commit your changes**
4. **Push to the branch**
5. **Open a Pull Request**

## **Technical Details**
* Language: C++
* Implementation: Object-Oriented
* Error Handling: Comprehensive
* Data Validation: Implemented

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Author

MD Ahnaf Hossain

## **Acknowledgments**

* Modern Banking Systems
* Object-Oriented Design Principles
* Secure Transaction Processing
***
⭐ Star this repository if you find it helpful!