#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct song
{
    char s_name[50];
    char artist[50];
    char movie[25];

    struct song *next;
    struct song *prev;
};
typedef struct song s;

s *head = NULL;

s *sad, *motivate, *devotional, *romance;
int ex = 1;

void first_page()
{

        printf("\n\n");
        printf("\n                                                    ----------\n");
        printf("                                                    | MUSIFY |");
        printf("\n                                                    ----------");
        printf("\n\n");
        printf("                            Welcome song lovers....Hope you will enjoy our service\n");
        printf("\n");
        printf("\n                                                   * * * * * *");
        printf("\n                                                 *             *");
        printf("\n                                               *  ||\\      /||  *");
        printf("\n                                              *   || \\    / ||   *");
        printf("\n                                             *    ||  \\  /  ||    *");
        printf("\n                                             *    ||   \\/   ||    *");
        printf("\n                                             *    ||        ||    *");
        printf("\n                                           ****   ||        ||   ****");
        printf("\n                                          ******                ******");
        printf("\n                                         ***  ***              ***  ***");
        printf("\n                                         ***  ***              ***  ***");
        printf("\n                                          ******                ******");
        printf("\n                                           ****                  ****");
        printf("\n\n\nDeveloped by:\n");
        printf("~~~~~~~~~~~~~\n\n");
        printf("__________________________\n");
        printf("|                         |\n");
        printf("|  B.Prasant Patnaik      |\n");
        printf("|_________________________|\n\n");

         sleep(7);
         system("cls");


}
void c_sad_songs() //creation of sad hindi songs
{
    s *ss1 = (s*)malloc(sizeof(s));//ss=sad songs
    s *ss2 = (s*)malloc(sizeof(s));
    s *ss3 = (s*)malloc(sizeof(s));
    s *ss4 = (s*)malloc(sizeof(s));
    s *ss5=(s*)malloc(sizeof(s));

    ss1->prev = ss5->next = NULL;
    ss1->next = ss2;
    ss2->next = ss3;
    ss3->next = ss4;
    ss4->next = ss5;

    ss2->prev = ss1;
    ss3->prev = ss2;
    ss4->prev = ss3;
    ss5->prev = ss4;

    //sad songs
    strcpy(ss1->s_name,"Phir bhi tumko chahunga");
    strcpy(ss1->artist,"Arijit Singh, Mithoon,Shashaa");
    strcpy(ss1->movie,"Half girlfriend");

    strcpy(ss2->s_name,"Roke na ruke naina");
    strcpy(ss2->artist,"Arijit Singh");
    strcpy(ss2->movie,"Badrinath ki dulhaniya");

    strcpy(ss3->s_name,"Bhula dena");
    strcpy(ss3->artist,"Mustafa Zahid");
    strcpy(ss3->movie,"Aashiqui 2");

    strcpy(ss4->s_name,"Mehrama");
    strcpy(ss4->artist,"Darshan raval");
    strcpy(ss4->movie,"Love aaj kal");

    strcpy(ss5->s_name,"Ek tarfa");
    strcpy(ss5->artist,"Darshan Raval");
    strcpy(ss5->movie,"Album");


     sad = ss1;
}
void c_mot_songs() //creation of motivational hindi songs
{
    s *ms1 = (s*)malloc(sizeof(s));//ms=motivational songs
    s *ms2 = (s*)malloc(sizeof(s));
    s *ms3 = (s*)malloc(sizeof(s));
    s *ms4 = (s*)malloc(sizeof(s));
    s *ms5 = (s*)malloc(sizeof(s));

    ms1->prev = ms5->next=NULL;
    ms1->next = ms2;
    ms2->next = ms3;
    ms3->next = ms4;
    ms4->next = ms5;

    ms2->prev = ms1;
    ms3->prev = ms2;
    ms4->prev = ms3;
    ms5->prev = ms4;


    //motivational songs
    strcpy(ms1->s_name,"Soorma");
    strcpy(ms1->artist,"Shankar, Ehsaan, Loy");
    strcpy(ms1->movie,"Soorma");

    strcpy(ms2->s_name,"Kar har maidaan fateh");
    strcpy(ms2->artist,"Sukhwinder, Shreya");
    strcpy(ms2->movie,"Sanju");

    strcpy(ms3->s_name,"Zinda");
    strcpy(ms3->artist,"Siddharth, Shankar");
    strcpy(ms3->movie,"Bhaag Milka Bhaag");

    strcpy(ms4->s_name,"Allah ke Bande");
    strcpy(ms4->artist,"Kailash kher");
    strcpy(ms4->movie,"Album");

    strcpy(ms5->s_name,"Behe chala");
    strcpy(ms5->artist,"Yasser, Shashwat");
    strcpy(ms5->movie,"Uri");

    motivate=ms1;
}
void c_dev_songs() //creation of devotional hindi songs
{
    s *ds1 = (s*)malloc(sizeof(s));//ds=devotional songs
    s *ds2 = (s*)malloc(sizeof(s));
    s *ds3 = (s*)malloc(sizeof(s));
    s *ds4 = (s*)malloc(sizeof(s));
    s *ds5 = (s*)malloc(sizeof(s));

    ds1->prev = ds5->next=NULL;
    ds1->next = ds2;
    ds2->next = ds3;
    ds3->next = ds4;
    ds4->next = ds5;

    ds2->prev = ds1;
    ds3->prev = ds2;
    ds4->prev = ds3;
    ds5->prev = ds4;


    //devotional songs
    strcpy(ds1->s_name,"Achutam Keshavam");
    strcpy(ds1->artist,"Vikram Hazra");
    strcpy(ds1->movie,"Album");

    strcpy(ds2->s_name,"Vakratunda Mahakaya");
    strcpy(ds2->artist,"Suresh Wadkar");
    strcpy(ds2->movie,"Album");

    strcpy(ds3->s_name,"Shree hanuman chalisa");
    strcpy(ds3->artist,"Hariharan");
    strcpy(ds3->movie,"Album");

    strcpy(ds4->s_name,"Radhe Radhe");
    strcpy(ds4->artist,"Alka Yagnik, Sanjeev");
    strcpy(ds4->movie,"Album");

    strcpy(ds5->s_name,"Sherawali maa");
    strcpy(ds5->artist,"Madhushree, Arko");
    strcpy(ds5->movie,"Album");


 devotional=ds1;


}
void c_rom_songs() //creation of romantic hindi songs
{
    s *rs1 = (s*)malloc(sizeof(s));//rs=romantic songs
    s *rs2 = (s*)malloc(sizeof(s));
    s *rs3 = (s*)malloc(sizeof(s));
    s *rs4 = (s*)malloc(sizeof(s));
    s *rs5 = (s*)malloc(sizeof(s));

    rs1->prev = rs5->next = NULL;

    rs1->next = rs2;
    rs2->next = rs3;
    rs3->next = rs4;
    rs4->next = rs5;

    rs2->prev = rs1;
    rs3->prev = rs2;
    rs4->prev = rs3;
    rs5->prev = rs4;


    romance = rs1;


     //romantic songs
    strcpy(rs1->s_name,"Pal");
    strcpy(rs1->artist,"Arijit singh, Shreya ghosal");
    strcpy(rs1->movie,"Jalebi");

    strcpy(rs2->s_name,"Qaafirana");
    strcpy(rs2->artist,"Arijit singh, Nikita gandhi");
    strcpy(rs2->movie,"kedarnath");

    strcpy(rs3->s_name,"Tere sang yaara");
    strcpy(rs3->artist,"Atif aslam");
    strcpy(rs3->movie,"Rustom");

    strcpy(rs4->s_name,"Main agar kahoon");
    strcpy(rs4->artist,"Sonu nigam, Shreya ghosal");
    strcpy(rs4->movie,"Om shanti om");

    strcpy(rs5->s_name,"Soch na sake");
    strcpy(rs5->artist,"Arman,Arijit, Tulsi kumar");
    strcpy(rs5->movie,"Airlift");


}
void link() //interlinking the different linklists
{
    sad->next->next->next->next->next=motivate;//after sad songs motivational songs will be played & vice versa
    motivate->prev=sad->next->next->next->next;

    motivate->next->next->next->next->next=devotional;//after motivational songs devotional songs will be played & vice versa
    devotional->prev=motivate->next->next->next->next;

    devotional->next->next->next->next->next=romance;//after devotional songs romantic songs will be played & vice versa
    romance->prev=devotional->next->next->next->next;

    romance->next->next->next->next->next=sad;//after romance songs sad songs will be played & vice versa
    sad->prev=romance->next->next->next->next;
}
void displayChoices() //Getting the choice of song
{
    int choice=0, song;

    printf("\nWhat's your choice ??\n");
    scanf("%d", &choice);

     while(choice > 7 || choice < 1)
     {
         printf("\nWrong choice!!!\nEnter Again: ");
         scanf("%d",&choice);
     }
     system("cls");

    switch(choice)
    {
    case 1:
        {
            printf("Appears you're in a good mood....\n\n");
            printf("---------------\n");
            printf("Romantic songs:\n");
            printf("---------------\n");
            s *temp = romance;
            s *temp2 = romance;//this is for actual parameter of play
          for(int i=1; i<=5; i++)
          {
              printf("\n%d.\n",i);
              printf("   Song:  ");
              puts(temp-> s_name);
              printf("   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
              printf("   Artists:");
              puts(temp-> artist);
              printf("   Movie:");
              puts(temp-> movie);
              temp = temp->next;
          }
          printf("\nYour choice:");
          scanf("%d",&song);
          while(song>=6||song<1)
           {

              printf("\nWrong choice!!!\nEnter Again:");
              scanf("%d",&song);

           }
            system("cls");
            for(int i=1;i<song;i++)
                temp2=temp2->next;
            play(temp2);

            break;
        }
    case 2:
        {
            printf("\nYour enthusiasm needs a boost, and love to do that for you....\n\n");
            printf("-------------------\n");
            printf("Motivational songs:\n");
            printf("-------------------\n");
            s *temp=motivate;
            for(int i=1; i<=5; i++)
            {
              printf("\n%d.\n",i);
              printf("   Song:  ");
              puts(temp->s_name);
              printf("   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
              printf("");
              printf("   Artists:");
              puts(temp->artist);
              printf("   Movie:");
              puts(temp->movie);
              temp=temp->next;
          }
          printf("\nYour choice:");
          scanf("%d",&song);
          while(song >= 6 || song < 1)
           {

              printf("\nWrong choice!!!\nEnter Again:");
              scanf("%d",&song);

           }
            system("cls");
            s *temp2 = motivate;
            for(int i=1; i<song; i++)
                temp2=temp2->next;
            play(temp2);

            break;
        }
    case 3:
        {
            printf("We look back and thank god,lets look forward and trust god....\n\n");
            printf("---------------\n");
            printf("Devotional songs:\n");
            printf("---------------\n");
            s *temp=devotional;
          for(int i=1;i<=5;i++)
          {
              printf("\n%d.\n",i);
              printf("   Song:  ");
              puts(temp->s_name);
              printf("   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
              printf("   Artists:");
              puts(temp->artist);
              printf("   Movie:");
              puts(temp->movie);
              temp=temp->next;
          }
          printf("\nYour choice:");
          scanf("%d",&song);
          while(song>=6||song<1)
           {

              printf("\nWrong choice!!!\nEnter Again:");
              scanf("%d",&song);

           }
            system("cls");
            s *temp2=devotional;
            for(int i=1;i<song;i++)
                temp2=temp2->next;
            play(temp2);

            break;
        }

    case 4:
        {
            printf("I m here for you ,its just a phase it will also pass just stay strong....\n\n");
            printf("----------\n");
            printf("Sad songs:\n");
            printf("----------\n");
            s *temp=sad;
          for(int i=1;i<=5;i++)
          {
              printf("\n%d.\n",i);
              printf("   Song:  ");
              puts(temp->s_name);
              printf("   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
              printf("   Artists:");
              puts(temp->artist);
              printf("   Movie:");
              puts(temp->movie);
              temp=temp->next;
          }
          printf("\nYour choice:");
          scanf("%d",&song);
          while(song>=6||song<1)
           {

              printf("\nWrong choice!!!\nEnter Again:");
              scanf("%d",&song);

           }
            system("cls");
           s *temp2=sad;
            for(int i=1;i<song;i++)
                temp2=temp2->next;
            play(temp2);

            break;
        }
    case 5:
        {
            search();
            break;
        }
    case 6:
        {
           goToExistingPlaylists();
           break;
        }
    case 7:
        {
            ex = 0;
            break;
        }
    }
}

void menu() //give the menu of genre,etc.
{
    system("cls");
    printf("\n\n Explore In Your Own Way......\n");
    printf("\n1.Romantic songs \n");
    printf("2.Motivation songs\n");
    printf("3.Devotional songs\n");
    printf("4.Sad songs       \n");
    printf("5.Search a song\n");
    printf("6.Go to existing playlist\n");
    printf("7. Exit\n\n");

    displayChoices();
}

void play(s *song) //playing songs
{

    printf("\n\n                                     NOW PLAYING\n");
    printf("                                    ~~~~~~~~~~~~~\n\n");
    s *temp=song;
    printf("                             SONG: ");
    puts(temp->s_name);
    printf("                             Artists: ");
    puts(temp->artist);
    printf("                             From: ");
    puts(temp->movie);
    printf("\n\n\n");
    printf("                                    <|     ||     |>\n");
    printf("\n\n                              Press 1 for PREVIOUS song\n");
    printf("                              Press 2 for NEXT song\n");
    printf("                              Press 3 ADD TO EXISTING PLAYLIST\n");
    printf("                              Press 4 Create a New PLAYLIST\n");
    printf("                              Press 5 for MAIN menu\n");
    printf("                              Press 0 to exit.\n\n");
    printf("                              Your choice: ");

    int choice;
    scanf("%d",&choice);
    while(choice > 5 || choice < 0)
    {
        printf("\nWrong choice!!!\nEnter Again:");
        scanf("%d",&choice);
    }

    system("cls");
    switch(choice)
    {
       case 0:
        {
            ex=0;
            break;
        }
       case 1:
        {
            play(temp->prev);
            break;
        }
        case 2:
        {
            play(temp->next);
            break;
        }
        case 3:
        {
            existing_playlist(song);
            break;
        }
        case 4:
        {
            new_playlist(song);
            break;
        }
        case 5:
        {
           break;
        }

     }
}

void displayFoundSongs(s* foundSongs[], int n) {
    system("cls");

    int k;
    for(int j = 0; j <= n; j++) {
        printf("            %d. ", (j +1));
        puts(foundSongs[j]-> s_name);
        printf("\n");
    }

    int choice;
Choice:
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if((choice <= 0) || (choice > (n +1))) {
        printf("Enter a valid choice...\n\n");
        goto Choice;
    }

    else {
        system("cls");

        play(foundSongs[choice -1]);
    }
}

int strcompare(char str1[], char str2[]) {
    for(int i = 0;; i++) {
        if(str1[i] == '\0' || str2[i] == '\0')
            return 1;

        if(((str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] >= 'a' && str1[i] <= 'z')) &&
        (str2[i] >= 'A' && str2[i] <= 'Z') || (str2[i] >= 'a' && str2[i] <= 'z')) {}
        else
            return 0;

        if((str1[i] != str2[i]) && (str1[i] != str2[i] + 32) && (str1[i] != str2[i] - 32))
            return 0;
    }
}

void searchByName() {
    system("cls");

    char s_name[50];
SongChoice:
    printf("Enter the name of the song you would like to play:\n");
    scanf("\n");
    gets(s_name);

    s *ptr;
    ptr = romance;

    s* foundSongs[20]; int i = -1;
    do {
        if(strcompare(ptr-> s_name, s_name)) {
            ++i;

            foundSongs[i] = ptr;
        }
        ptr = ptr-> next;
    }
    while(ptr != romance);

    if(i == -1) {
        printf("\nSorry!!\nSong not found...\n\n");
        goto SongChoice;
    }
    else
        displayFoundSongs(foundSongs, i);

    return;
}

void searchByMovie() {
    system("cls");

MovieChoice:
    printf("Enter the movie name:\n");
    char movie[25];
    scanf("\n");
    gets(movie);

    s *ptr;
    ptr = romance;

    s* foundSongs[20]; int i = -1;
    do {
        if(strcompare(ptr-> movie, movie)) {
            ++i;

            foundSongs[i] = ptr;
        }
        ptr = ptr-> next;
    }
    while(ptr != romance);

    if(i == -1) {
        printf("\nSorry!!\nSong not found...\n\n");
        goto MovieChoice;
    }
    else
        displayFoundSongs(foundSongs, i);

    return;
}

void search() {
    system("cls");

    int choice;
    printf("\n                      SEARCH \n");
    printf("                      ~~~~~~ \n\n");
    printf("            1. By Song Name\n\n");
    printf("            2. By Album Name\n\n");
    printf("            Press any other number to go to previous menu\n\n");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice) {
    case 1:
        {
        searchByName();
        break;
        }
    case 2:
        {
         searchByMovie();
         break;
        }
    default:
        menu();
        break;
    }
}

void play_in_sequence() {
    s *ptr;
    ptr = head;
    while(ptr != NULL) {
        system("cls");

        printf("\n\n                                     NOW PLAYING\n");
        printf("                                    ~~~~~~~~~~~~~\n\n");
        printf("                             SONG: ");
        puts(ptr-> s_name);
        printf("                             Artists: ");
        puts(ptr-> artist);
        printf("                             From: ");
        puts(ptr-> movie);
        printf("\n\n\n");
        printf("                                    <|     ||     |>\n");

        ptr = ptr-> next;

        sleep(5);
    }
    system("cls");

    char c;
    printf("\n                  Wanna play again? (y/n)\n");
    scanf("\n");
    scanf("%c", &c);

    if(c == 'y' || c== 'Y') {
         play_in_sequence();
    }
    else {
        printf("\n\n\nProceeding to menu...");
        sleep(3);
    }
    return;
}

void play_on_choice(char playlistName[]) {
    system("cls");

    s *ptr;
    ptr = head;
    int i = 0;

    printf("\nPLAYLIST NAME: %s", playlistName);
    printf("\n\n\n                                Songs :-\n");
    while(ptr != NULL) {
        ++i;
        printf("                    %d. %s\n", i, ptr-> s_name);

        ptr = ptr-> next;
    }
    printf("\n");

    printf("Which song do you want to play?\n");
    int choice;
    printf("ENTER: ");scanf("%d", &choice);

    while(choice <= 0 || choice > i) {
        printf("\nWrong choice!!!\nEnter Again: ");
        scanf("%d", &choice);
    }

    s *song;
    song = head;
    for(int i = 1; i < choice; i++) {
        song = song-> next;
    }

    system("cls");

    printf("\n\n                                     NOW PLAYING\n");
    printf("                                    ~~~~~~~~~~~~~\n\n");
    printf("                             SONG: ");
    puts(song-> s_name);
    printf("                             Artists: ");
    puts(song-> artist);
    printf("                             From: ");
    puts(song-> movie);
    printf("\n\n\n");
    printf("                                    <|     ||     |>\n");

    sleep(3);
    system("cls");

    char c;
    printf("\n                  Wanna play another song of Playlist? (y/n)\n");
    scanf("\n");
    scanf("%c", &c);

    if(c == 'y' || c== 'Y') {
         play_on_choice(playlistName);
    }
    else {
        printf("\n\n\nProceeding to menu...");
        sleep(3);
    }
    return;
}

void displayFoundSongs2(s* foundSongs[], int n, char playlistName[]) {
    system("cls");

    int k;
    for(int j = 0; j <= n; j++) {
        printf("            %d. ", (j +1));
        puts(foundSongs[j]-> s_name);
        printf("\n");
    }

    int choice;
Choice:
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if((choice <= 0) || (choice > (n +1))) {
        printf("Enter a valid choice...\n\n");
        goto Choice;
    }

    else {
        add_song(fopen(playlistName, "a"), foundSongs[choice -1]);
        printf("\nSong Added successfully.....");

        printf("\n\n\nProceeding to menu...\n");
        sleep(3);
    }
}

void searchByName2(char playlistName[]) {
    system("cls");

    char s_name[50];
SongChoice2:
    printf("Enter the name of the song you would like to play:\n");
    scanf("\n");
    gets(s_name);

    s *ptr;
    ptr = romance;

    s* foundSongs[20]; int i = -1;
    do {
        if(strcompare(ptr-> s_name, s_name)) {
            ++i;

            foundSongs[i] = ptr;
        }
        ptr = ptr-> next;
    }
    while(ptr != romance);

    if(i == -1) {
        printf("\n     Sorry!!\nSong not found...\n\n");
        goto SongChoice2;
    }
    else
        displayFoundSongs2(foundSongs, i, playlistName);

    return;
}

void searchByMovie2(char playlistName[]) {
    system("cls");

MovieChoice2:
    printf("Enter the movie name:\n");
    char movie[25];
    scanf("\n");
    gets(movie);

    s *ptr;
    ptr = romance;

    s* foundSongs[20]; int i = -1;
    do {
        if(strcompare(ptr-> movie, movie)) {
            ++i;

            foundSongs[i] = ptr;
        }
        ptr = ptr-> next;
    }
    while(ptr != romance);

    if(i == -1) {
        printf("\n     Sorry!!\nSong not found...\n\n");
        goto MovieChoice2;
    }
    else
        displayFoundSongs2(foundSongs, i, playlistName);

    return;
}

void search2(char playlistName[]) {
    system("cls");
    printf("\n\n");
    int choice;
    printf("\n                      SEARCH ");
    printf("\n                      ~~~~~~ ");
    printf("\n                    1. By Song Name\n\n");
    printf("                    2. By Album Name\n\n");
    printf("                    Press any other number to go to previous menu\n\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice) {
    case 1:
        {
        searchByName2(playlistName);
        break;
        }
    case 2:
        {
         searchByMovie2(playlistName);
         break;
        }
    default:
        break;
    }
}

void delete_song_from_Playlist(char playlistName[]) {

    s *ptr;
    ptr = head;
    int i = 0;
    system("cls");
    printf("\n\n");
    printf("\nPLAYLIST NAME: %s", playlistName);
    printf("\n\n\n                                Songs :-\n");
    while(ptr != NULL) {
        ++i;
        printf("                    %d. %s\n", i, ptr-> s_name);

        ptr = ptr-> next;
    }
    printf("\n");

    int l ;
    l = i;

DeleteUserChoice:
    printf("Which song do you want to delete?\n");
    int choice;
    printf("ENTER: ");scanf("%d", &choice);

    if(choice < 1 || choice > l) {
        printf("Enter a valid choice!!\n\n");
        goto DeleteUserChoice;
    }
    else {
        ptr = head;
        for(int i = 1; i < choice; i++) {
            ptr = ptr-> next;
        }
        s *temp;
        temp = ptr;
        if(ptr == head) {
            head = head-> next;
            if(head != NULL) {
                head-> prev = NULL;
            }
        }
        else {
            ptr-> prev-> next = ptr-> next;

            if(ptr-> next != NULL)
                ptr-> next-> prev = ptr-> prev;
        }
        free(temp);
    }

    FILE *fp = fopen(playlistName, "w");
    fclose(fp);

    ptr = head;
    while(ptr != NULL) {
        add_song(fopen(playlistName, "a"), ptr);
        ptr = ptr-> next;
    }
    printf("\nSong Deleted successfully.....");

    printf("\n\n\nProceeding to menu...");
    sleep(3);
}

void delete_playlist(char playlistName[]) {
    FILE *fptr;
    fptr = fopen("Playlists", "r");

    char ch;
    char playlist[25] = "\0"; int i = -1;
    char playlists[25][25]; int k = -1;
    while((ch = fgetc(fptr)) != EOF) {
        if(ch == '\n') {
            ++k;
            strcpy(playlists[k], playlist);

            int j = 0;
            while(playlist[j] != '\0') {
                playlist[j++] = '\0';
            }
            i = -1;
        }
        else {
            ++i;
            playlist[i] = ch;
        }
    }
    fclose(fptr);

    system("cls");
    printf("\n\n");
    int index;
    for(int i = 0; i <= k; i++) {
        if(strcmp(playlists[i], playlistName) == 0) {
            index = i;
            break;
        }
    }

    fptr = fopen("Playlists", "w");
    fclose(fptr);

    fptr = fopen("Playlists", "a");
    for(int i = 0; i <= k; i++) {
        if(i == index) {}
        else
            fprintf(fptr, "%s\n", playlists[i]);
    }
    fclose(fptr);

    system("cls");
    printf("\n\n");
    printf("Playlist deleted successfully...");

    printf("\n\n\nProceeding to main menu...");
    sleep(3);
}

void display_playlist(char playlistName[]) {
Beg:
    deleteLinkedList();
    createLinkedList(playlistName);

    system("cls");
    printf("\n\n");
    printf("\nPLAYLIST NAME: %s", playlistName);
    printf("\n\n\n                                 Songs :-\n");

    if(head == NULL) {
        printf("                    No Songs available in this playlist");

        printf("\n\n                    1. Add a song to playlist\n\n");
        printf("                    2. Delete playlist\n\n");

        printf("                    Press any other number to proceed to main menu\n\n");

        int choice;
        printf("ENTER CHOICE: ");
        scanf("%d", &choice);

        if(choice == 1) {
            search2(playlistName);
        }
        if(choice == 2) {
            delete_playlist(playlistName);
        }
        else {
            printf("\n\n\nProceeding to main menu.....");
            sleep(3);
        }

        return;
    }

    s *ptr;
    ptr = head;
    int i = 1;

    while(ptr != NULL) {
        printf("                    %d. %s\n", i, ptr-> s_name);
        ++i;

        ptr = ptr-> next;
    }
    sleep(3);

    printf("\n\n\n                            MENU\n                          ________\n\n");
    printf("                    1. Play songs in sequence\n\n");
    printf("                    2. Select a song to play\n\n");
    printf("                    3. Add a song to playlist\n\n");
    printf("                    4. Delete a song from playlist\n\n");
    printf("                    5. Sort playlist\n\n");
    printf("                    6. Delete playlist\n\n");
    printf("                Press any other number to return to main menu\n\n");

    int choice;
    printf("ENTER CHOICE: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: play_in_sequence();
            break;
        case 2: play_on_choice(playlistName);
            break;
        case 3: search2(playlistName);
            break;
        case 4: delete_song_from_Playlist(playlistName);
            break;
        case 5: sort(playlistName);
            break;
        case 6: delete_playlist(playlistName);
            return;
        default:
            printf("\nProceeding to main menu.....\n");
            sleep(3);
            return;
    }
    goto Beg;
}

void goToExistingPlaylists() {
    FILE *fptr;
    fptr = fopen("Playlists", "r");

    char ch;
    char playlistName[25] = "\0"; int i = -1;
    char playlists[25][25]; int k = -1;
    while((ch = fgetc(fptr)) != EOF) {
        if(ch == '\n') {
            ++k;
            strcpy(playlists[k], playlistName);

            int j = 0;
            while(playlistName[j] != '\0') {
                playlistName[j++] = '\0';
            }
            i = -1;
        }
        else {
            ++i;
            playlistName[i] = ch;
        }
    }
    fclose(fptr);

    system("cls");
    printf("\n\n");
    if(k == -1) {
        printf("\n          Sorry!!\nYou haven't created any playlist yet...\n\n\n");

        printf("Proceeding to main menu...");
        sleep(3);
    }
    else {
        printf("                    PLAYLISTS\n");
        printf("                    =========\n\n");
        for(int i = 0; i <= k; i++) {
            printf("%d. %s\n", (i +1), playlists[i]);
        }

        printf("\n\n            Which playlist do you want to play?\n");

        int choice;
        printf("ENTER: ");scanf("%d", &choice);

        while(choice <= 0 || choice > (k +1)) {
            printf("\nWrong choice!!!\nEnter Again: ");
            scanf("%d", &choice);
        }

        display_playlist(playlists[choice -1]);
    }
}

void insert(char s_name[], char artist[], char movie[]) {
    s *newnode = (s*)malloc(sizeof(s));

    strcpy(newnode-> s_name, s_name);
    strcpy(newnode-> artist, artist);
    strcpy(newnode-> movie, movie);

    newnode-> next = NULL;
    newnode-> prev = NULL;

    if(head == NULL)
    {
        head = newnode;

        return;
    }

    s *ptr;
    ptr = head;
    while(ptr-> next != NULL)
    {
        ptr = ptr-> next;
    }

    ptr-> next = newnode;
    newnode-> prev = ptr;
}

void createLinkedList(char playlistName[]) {
   FILE *fptr;
   fptr = fopen(playlistName, "r");

    char ch; int c = 0;
    char name[50] = "\0"; int i = -1;
    char trackInfo[50][50]; int k = -1;
    while((ch = fgetc(fptr)) != EOF) {
        if(ch == '\n') {
            ++k;
            strcpy(trackInfo[k], name);

            int j = 0;
            while(name[j] != '\0') {
                name[j++] = '\0';
            }
            i = -1;
        }
        else {
            ++i;
            name[i] = ch;
        }
    }
    fclose(fptr);

    for(int i = 0; i <= k; i += 3) {
        insert(trackInfo[i], trackInfo[i +1], trackInfo[i +2]);
    }
}

void sort(char playlistName[]) {
    s *last = head;

    while(last->next!= NULL)
        last = last->next;

    s *ptr = head;
    s *temp = malloc(sizeof(s));
    s *ref;
    ref= head;

    while(ref != last)
    {
        ptr = ref;
        while((ptr->next) != NULL)
        {
            if(strcmp(ptr-> s_name,(ptr->next)-> s_name)>0)
            {
                  strcpy(temp->s_name,ptr->s_name);
                  strcpy(temp->artist,ptr->artist) ;
                  strcpy(temp->movie,ptr->movie);
                  strcpy(ptr->s_name,(ptr->next)->s_name);
                  strcpy(ptr->artist,(ptr->next)->artist);
                  strcpy(ptr->movie,(ptr->next)->movie);
                  strcpy((ptr->next)->s_name,temp->s_name);
                  strcpy((ptr->next)->artist,temp->artist);
                  strcpy((ptr->next)->movie,temp->movie);
            }
            ptr = ptr->next;
        }
        last = last->prev;
    }

    FILE *fp = fopen(playlistName, "w");
    fclose(fp);

    ptr = head;
    while(ptr != NULL) {
        add_song(fopen(playlistName, "a"), ptr);
        ptr = ptr-> next;
    }

    system("cls");
    printf("\n\n");
    printf("\nPlaylist sorted successfully.....");

    printf("\n\n\nProceeding to menu...");
    sleep(3);
}

void deleteLinkedList() {
    head = NULL;
}

void new_playlist(s *song) {
    printf("\n\n");
PlaylistName:
    printf("Enter the name for the playlist - \n");
    char newPlaylist[50];
    scanf("\n");
    gets(newPlaylist);

    FILE *fptr;
    fptr = fopen("Playlists", "r");

    char ch;
    char playlist[25] = "\0"; int i = -1;
    char playlists[25][25]; int k = -1;
    while((ch = fgetc(fptr)) != EOF) {
        if(ch == '\n') {
            ++k;
            strcpy(playlists[k], playlist);

            int j = 0;
            while(playlist[j] != '\0') {
                playlist[j++] = '\0';
            }
            i = -1;
        }
        else {
            ++i;
            playlist[i] = ch;
        }
    }
    fclose(fptr);

    for(int i = 0; i <= k; i++) {
        if(strcmp(playlists[i], newPlaylist) == 0) {
            printf("            INVALID...\nA Playlist with the same name already exist!!\n\n");
            goto PlaylistName;
        }
    }

    fptr = fopen("Playlists", "a");

    fprintf(fptr, "%s\n", newPlaylist);
    fclose(fptr);

    add_song(fopen(newPlaylist, "w"), song);

    printf("\nSong Added successfully.....");

    printf("\n\n\nProceeding to menu...");
    sleep(3);
}

void existing_playlist(s *song) {
    FILE *fptr;
    fptr = fopen("Playlists", "r");

    char ch;
    char playlistName[25] = "\0"; int i = -1;
    char playlists[25][25]; int k = -1;
    while((ch = fgetc(fptr)) != EOF) {
        if(ch == '\n') {
            ++k;
            strcpy(playlists[k], playlistName);

            int j = 0;
            while(playlistName[j] != '\0') {
                playlistName[j++] = '\0';
            }
            i = -1;
        }
        else {
            ++i;
            playlistName[i] = ch;
        }
    }
    fclose(fptr);

    system("cls");
    printf("\n\n");
    if(k == -1) {
        printf("            Sorry!!!\nYou haven't created any playlist yet...\n\n");

        printf("                    Press 1 to create a new playlist\n");
        printf("                    Press any other number to proceed to main menu\n");

        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);

        switch(choice) {
        case 1:
            system("cls");
             new_playlist(song);
            break;
        default: break;
        }

        return;
    }

    printf("                    PLAYLISTS\n");
    printf("                    =========\n\n");
    for(int i = 0; i <= k; i++) {
        printf("%d. %s\n", (i +1), playlists[i]);
    }

    printf("\n\n            Which playlist do you want to add song?\n");

    int choice;
    printf("ENTER: ");
    scanf("%d", &choice);

    while(choice <= 0 || choice > (k +1)) {
        printf("\nWrong choice!!!\nEnter Again:");
        scanf("%d", &choice);
    }

    add_song(fopen(playlists[choice -1], "a"), song);

    printf("\nSong Added successfully.....");

    printf("\n\n\nProceeding to menu...");
    sleep(3);
 }

void add_song(FILE *fp, s *song) {
    fprintf(fp, "%s\n", song-> s_name);
    fprintf(fp, "%s\n", song-> artist);
    fprintf(fp, "%s\n", song-> movie);

    fclose(fp);
}

int main() {

    ex = 1;
    first_page();
    while(ex)
    {
      c_sad_songs();
      c_mot_songs();
      c_dev_songs();
      c_rom_songs();

      link();
      menu();
    }
    printf("\n                                                       THANK YOU\n                                                  HOPE YOU HAVE ENJOYED\n\n\n");

    return 0;
}
