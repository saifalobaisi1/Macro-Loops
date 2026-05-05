#ifdef INCLUDE_A
for (int y = 1 ; y < 3; y++){

        #ifndef INCLUDE_B
        printf("y : %d\n", y);
        #endif

#endif

    #ifdef INCLUDE_B
    #include"include.b.c"
    #endif

#ifdef INCLUDE_A
}
#endif
