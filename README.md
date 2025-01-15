# Bank Account Management System

## Overview
A robust C++ implementation of a bank account management system that simulates basic banking operations. This system provides a foundation for handling account transactions and management in a secure and efficient manner.

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
Account acc1("John Doe", 1001, 1000.0, "Savings");
Account acc2("Jane Smith", 1002, 2000.0, "Checking");

// Perform operations
acc1.deposit(500);
acc1.withdraw(200);
acc1.transfer(300, acc2);
acc1.showAccountDetails();
```

## Installation and Running the Program
1. **Clone the repository**
    ```bash
    git clone https://github.com/YourUsername/BankAccountManagementSystem.git

## License

This project is licensed under the MIT License.
