/*You are an archivist at a museum dedicated to ancient geometric artifacts. Each artifact has a unique name that can be quite lengthy and descriptive. Additionally, each artifact has a certain number of edges, which is an important characteristic for categorization.



The museum's database is old and requires data to be input in a specific way. Due to a peculiar quirk in the database system, the input for the artifact name and the number of edges must be given in a single uninterrupted session. If the inputs are not provided correctly, the database might misinterpret the entries, causing confusion among the records.



Your task is to write a program that helps museum staff correctly input the artifact data. The program should take the artifact's full name (which cannot include spaces) and the number of its edges, then generate a structured output that confirms the correct entry of data.

Input format :
The first line is a string representing the full name of an artifact (without spaces).

The second line consists of an integer representing the number of edges the artifact has.

Output format :
The program should print a sentence in the format: "ArtifactName has X edges.", where "ArtifactName" is the input string and "X" is the input integer.*/


#include <stdio.h>

int main() {
    char str[250];
    scanf("%[^\n]", str);

    int size;
    scanf("%d", &size);

    printf("%s has %d sides.", str, size);

    return 0;
}

