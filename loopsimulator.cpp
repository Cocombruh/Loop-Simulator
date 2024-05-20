#include <bits/stdc++.h>
using namespace std;
void forloop();
void whileloop();
void dowhileloop();
int main (){
    while (true){
    cout << "LOOP SIMULATION MENU" << endl;
    cout << "[1] for loop" << endl;
    cout << "[2] while loop" << endl;
    cout << "[3] do while loop" << endl;
    int option;
    cout << "Option: ";
    cin >> option;
    switch (option){
        case 1: //for loop
        forloop();
        break;
        case 2: //while loop
        whileloop();
        break;
        case 3: // do while loop
        dowhileloop();
        break; 
    }
    }
    }
    void forloop(){
        cout << "Variable Name: ";
        char variableName [100];
        cin.ignore();
        cin.getline(variableName, 100);
        cout << "Initial Value: ";
        int initialValue;
        cin >> initialValue;
        cout << "Conditional Operator: ";
        string conditionalOperator;
        cin.ignore();
        getline(cin, conditionalOperator);
        cout << "Terminal Value: ";
        int terminalValue;
        cin >>terminalValue;
        cout << "Update Operator: ";
        string updateOperator;
        cin.ignore();
        getline(cin, updateOperator);
        if (conditionalOperator == "<=" && updateOperator == "++"){
            for (int i = initialValue; i <= terminalValue; i++) {
        cout << "for (int " << variableName << " = "<<initialValue<< ";" << variableName<< " " << conditionalOperator << terminalValue << ";" <<variableName<<updateOperator<<")";
        cout << "{\n";
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "<=" && updateOperator == "--"){
            for (int i = initialValue; i <= terminalValue; i--) {
        cout << "for (int " << variableName << " = "<<initialValue<< ";" << variableName<< " " << conditionalOperator << terminalValue << ";" <<variableName<<updateOperator<<")";
        cout << "{\n";
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">=" && updateOperator == "--"){
            for (int i = initialValue; i >= terminalValue; i--) {
        cout << "for (int " << variableName << " = "<<initialValue<< ";" << variableName<< " " << conditionalOperator << terminalValue << ";" <<variableName<<updateOperator<<")";
        cout << "{\n";
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">=" && updateOperator == "++"){
            for (int i = initialValue; i >= terminalValue; i++) {
        cout << "for (int " << variableName << " = "<<initialValue<< ";" << variableName<< " " << conditionalOperator << terminalValue << ";" <<variableName<<updateOperator<<")";
        cout << "{\n";
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">" && updateOperator == "++"){
            for (int i = initialValue; i > terminalValue; i++) {
        cout << "for (int " << variableName << " = "<<initialValue<< ";" << variableName<< " " << conditionalOperator << terminalValue << ";" <<variableName<<updateOperator<<")";
        cout << "{\n";
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">" && updateOperator == "--"){
            for (int i = initialValue; i > terminalValue; i--) {
        cout << "for (int " << variableName << " = "<<initialValue<< ";" << variableName<< " " << conditionalOperator << terminalValue << ";" <<variableName<<updateOperator<<")";
        cout << "{\n";
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "<" && updateOperator == "++"){
            for (int i = initialValue; i < terminalValue; i++) {
        cout << "for (int " << variableName << " = "<<initialValue<< ";" << variableName<< " " << conditionalOperator << terminalValue << ";" <<variableName<<updateOperator<<")";
        cout << "{\n";
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "<" && updateOperator == "--"){
            for (int i = initialValue; i < terminalValue; i--) {
        cout << "for (int " << variableName << " = "<<initialValue<< ";" << variableName<< " " << conditionalOperator << terminalValue << ";" <<variableName<<updateOperator<<")";
        cout << "{\n";
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        }
    }
    void whileloop(){
        cout << "Variable Name: ";
        char variableName [100];
        cin.ignore();
        cin.getline(variableName, 100);
        cout << "Initial Value: ";
        int initialValue;
        cin >> initialValue;
        cout << "Conditional Operator: ";
        string conditionalOperator;
        cin.ignore();
        getline(cin, conditionalOperator);
        cout << "Terminal Value: ";
        int terminalValue;
        cin >>terminalValue;
        cout << "Update Operator: ";
        string updateOperator;
        cin.ignore();
        getline(cin, updateOperator);
        if (conditionalOperator == "<=" && updateOperator == "++"){
            while (initialValue <= terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " <= " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "<=" && updateOperator == "--"){
            while (initialValue <= terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " <= " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">=" && updateOperator == "++"){
            while (initialValue >= terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " >= " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">=" && updateOperator == "--"){
            while (initialValue >= terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " >= " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">" && updateOperator == "--"){
            while (initialValue > terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " > " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">" && updateOperator == "++"){
            while (initialValue > terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " > " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "<" && updateOperator == "--"){
            while (initialValue < terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " < " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "<" && updateOperator == "++"){
            while (initialValue < terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " < " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "==" && updateOperator == "--"){
            while (initialValue == terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " == " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "==" && updateOperator == "++"){
            while (initialValue == terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " == " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "!=" && updateOperator == "--"){
            while (initialValue != terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " != " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "!=" && updateOperator == "++"){
            while (initialValue != terminalValue) {
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "while("<<variableName << " != " <<terminalValue;
        cout << "{\n";
        cout << variableName<<updateOperator << endl;
        cout << "}\n";
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        }
    }
    void dowhileloop(){
        cout << "Variable Name: ";
        char variableName [100];
        cin.ignore();
        cin.getline(variableName, 100);
        cout << "Initial Value: ";
        int initialValue;
        cin >> initialValue;
        cout << "Conditional Operator: ";
        string conditionalOperator;
        cin.ignore();
        getline(cin, conditionalOperator);
        cout << "Terminal Value: ";
        int terminalValue;
        cin >>terminalValue;
        cout << "Update Operator: ";
        string updateOperator;
        cin.ignore();
        getline(cin, updateOperator);
        if (conditionalOperator == "<=" && updateOperator == "++"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "<=" && updateOperator == "--"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">=" && updateOperator == "++"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">=" && updateOperator == "--"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "<" && updateOperator == "++"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "<" && updateOperator == "--"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">" && updateOperator == "++"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == ">" && updateOperator == "--"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "==" && updateOperator == "++"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "==" && updateOperator == "--"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "!=" && updateOperator == "++"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        } else if (conditionalOperator == "!=" && updateOperator == "--"){
            while (initialValue <= terminalValue){
        cout << "int " << variableName << " = "<<initialValue<< ";" << endl;
        cout << "do" << "{\n";
        cout << variableName << "++\n}";
        cout << "while(" << variableName << " " << conditionalOperator << " "<<terminalValue << ");"<< endl;
        if (updateOperator == "++"){
        initialValue++;
        }
        else {
            initialValue--;
        }
        }
        }
        }
