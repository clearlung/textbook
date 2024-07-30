for (i=0; i<lim-1 && (c=getchar()) !='\n' && c != EOF; ++i)
  s[i] = c;

//2-2: Write a loop equivalent tto the for loop above without useing && or ||

i=0;
while (i<lim-1)
  if ((c=getchar()) !='\n')
    if (c != EOF)
      s[++i] = c;
