for (int i = 0 ; i < 3; i++){
    #ifdef INCLUDE_A
    printf("result.b = %d\n" , (i * y));
    
    #else
    printf("result = %d\n" , (i));
    #endif
}
