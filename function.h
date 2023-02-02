void readNames(){
string myText;
ifstream myFile("README.md");

while (getline (myFile, myText)) {
    // Output the text from the file
    cout << myText;
}
    myFile.close();
}