// Compiled and ran on Intel i7

#include<iostream> // For input/output
#include<string> // for getline()
#include<vector> // for vectors
#include<cmath> // for sqrt()

using namespace std;

// Returns a string with only lowercase letters, puctuation is removed.
string normalizeText(string input_string){
    string lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
    string uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string normal_text = "";
    for(char c : input_string){
        for(int i = 0; i < lowercase_letters.length(); i++){
            // if lowercase.
            if(c == lowercase_letters[i]){
                normal_text += c;
                break;
            }
            // if uppercase
            else if(c == uppercase_letters[i]){
                normal_text += lowercase_letters[i];
                break;
            }
        }
    }
    return normal_text;
}

string encodeMessage(string normal_text){
    vector<vector<char>> grid; // grid to store chars
    int c = sqrt(normal_text.length()) + 1; // c is num of columns
    int cur_index = 0; // index of char that needs placed in grid.
    while(cur_index < normal_text.length()){
        vector<char> row; // one row of grid
        for(int i = 0; i < c; i++){
            if(cur_index >= normal_text.length()){
                row.push_back('#'); // if out of chars, push back hashtags.
            }
            else {
                row.push_back(normal_text[cur_index]);
                cur_index++;
            }
        }
        grid.push_back(row);
    }
    string encrypted_line = "";
    // Create the encrypted string.
    for(int i = 0; i < c; i++){
        for(vector<char> row : grid){
            encrypted_line += row[i]; // add each char in same column
        }
        //encrypted_line += " "; // didn't add this in actual contest, may have needed it ig...
    }
    return encrypted_line;
}

int main() {
    // Accept an inputted string.
    string input_string;
    cout << "Enter string to encrypt...\n";
    getline(cin, input_string);
    // Check if string has a value.
    if(input_string == ""){
        cout << "Faulty string.";
    }
    else{
        // Normalize the text.
        string normal_text = normalizeText(input_string);
        // Encode the message.
        string encrypted_message = encodeMessage(normal_text);
        // Print the Message
        cout << encrypted_message << "\n";
    }
    return 0;
}