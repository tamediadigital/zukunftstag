/*************************************************
 * Public Constants
 *************************************************/
#define	NOTE_C0  16.35
#define	NOTE_CS0 17.32
#define	NOTE_D0	 18.35
#define	NOTE_DS0 19.45
#define	NOTE_E0	 20.60
#define	NOTE_F0	 21.83
#define	NOTE_FS0 23.12
#define	NOTE_G0  24.50
#define	NOTE_GS0 25.96
#define	NOTE_A0  27.50
#define	NOTE_AS0 29.14
#define	NOTE_B0	 30.87
#define	NOTE_C1	 32.70
#define NOTE_CS1 34.65
#define NOTE_D1  36.71
#define NOTE_DS1 38.89
#define NOTE_E1  41.20
#define NOTE_F1  43.65
#define NOTE_FS1 46.25
#define NOTE_G1  49.00
#define NOTE_GS1 51.91
#define NOTE_A1  55.00
#define NOTE_AS1 58.27
#define NOTE_B1  61.74
#define NOTE_C2  65.41
#define NOTE_CS2 69.30
#define NOTE_D2  73.42
#define NOTE_DS2 77.78
#define NOTE_E2  82.41
#define NOTE_F2  87.31
#define NOTE_FS2 92.50
#define NOTE_G2  98.00
#define NOTE_GS2 103.83
#define NOTE_A2  110.00
#define NOTE_AS2 116.54
#define NOTE_B2  123.47
#define NOTE_C3  130.81
#define NOTE_CS3 138.59
#define NOTE_D3  146.83
#define NOTE_DS3 155.56
#define NOTE_E3  164.81
#define NOTE_F3  174.61
#define NOTE_FS3 185.00
#define NOTE_G3  196.00
#define NOTE_GS3 207.65
#define NOTE_A3  220.00
#define NOTE_AS3 233.08
#define NOTE_B3  246.94
#define NOTE_C4  261.63
#define NOTE_CS4 277.18
#define NOTE_D4  293.66
#define NOTE_DS4 311.13
#define NOTE_E4  329.63
#define NOTE_F4  349.23
#define NOTE_FS4 369.99
#define NOTE_G4  392.00
#define NOTE_GS4 415.30
#define NOTE_A4  440.00
#define NOTE_AS4 466.16
#define NOTE_B4  493.88
#define NOTE_C5  523.25
#define NOTE_CS5 554.37
#define NOTE_D5  587.33
#define NOTE_DS5 622.25
#define NOTE_E5  659.26
#define NOTE_F5  698.46
#define NOTE_FS5 739.99
#define NOTE_G5  783.99
#define NOTE_GS5 830.61
#define NOTE_A5  880
#define NOTE_AS5 932.33
#define NOTE_B5  987.77
#define NOTE_C6  1046.50
#define NOTE_CS6 1108.73
#define NOTE_D6  1174.66
#define NOTE_DS6 1244.51
#define NOTE_E6  1318.51
#define NOTE_F6  1396.91
#define NOTE_FS6 1479.98
#define NOTE_G6  1567.98
#define NOTE_GS6 1661.22
#define NOTE_A6  1760.00
#define NOTE_AS6 1864.66
#define NOTE_B6  1975.53
#define NOTE_C7  2093.00
#define NOTE_CS7 2217.46
#define NOTE_D7  2349.32
#define NOTE_DS7 2489.02
#define NOTE_E7  2637.02
#define NOTE_F7  2793.83
#define NOTE_FS7 2959.96
#define NOTE_G7  3135.96
#define NOTE_GS7 3322.44
#define NOTE_A7  3520.01
#define NOTE_AS7 3729.31
#define NOTE_B7  3951.07
#define NOTE_C8  4186.01
#define NOTE_CS8 4434.92
#define NOTE_D8  4698.64
#define NOTE_DS8 4978.03

// DURATION OF THE NOTES 
#define BPM 120    //  you can change this value changing all the others
#define H 2*Q //half 2/4
#define Q 60000/BPM //quarter 1/4 
#define E Q/2   //eighth 1/8
#define S Q/4 // sixteenth 1/16
#define W 4*Q // whole 4/4

//Mario main theme melody
int mario[] = {
  NOTE_E7,12,  NOTE_E7,12,  0,12,  NOTE_E7,12, 
  0,12,  NOTE_C7,12,  NOTE_E7,12,  0,12, 
  NOTE_G7,12,  0,12,  0,12,   0,12, 
  NOTE_G6,12,  0,12,  0,12,  0,12, 

  NOTE_C7,12,  0,12,  0,12,  NOTE_G6,12, 
  0,12,  0,12,  NOTE_E6,12,  0,12, 
  0,12,  NOTE_A6,12,  0,12,  NOTE_B6,12, 
  0,12,  NOTE_AS6,12,  NOTE_A6,12,  0,12, 
 
  NOTE_G6,9,  NOTE_E7,9,  NOTE_G7,9, 
  NOTE_A7,12, 0,12, NOTE_F7,12, NOTE_G7,12,
  0,12, NOTE_E7,12, 0,12, NOTE_C7,12,
  NOTE_D7,12, NOTE_B6,12, 0,12, 0,12,
 
  NOTE_C7,12,  0,12,  0,12,  NOTE_G6,12, 
  0,12,  0,12,  NOTE_E6,12,  0,12, 
  0,12,  NOTE_A6,12,  0,12,  NOTE_B6,12, 
  0,12,  NOTE_AS6,12,  NOTE_A6,12,  0,12, 
 
  NOTE_G6,9,  NOTE_E7,9,  NOTE_G7,9, 
  NOTE_A7,12, 0,12, NOTE_F7,12, NOTE_G7,12,
  0,12, NOTE_E7,12, 0,12, NOTE_C7,12,
  NOTE_D7,12, NOTE_B6,12, 0,12, 0,12
};

//james
int jamesbond[] = {
  NOTE_E4,8,  NOTE_F4,16, NOTE_F4,16, NOTE_F4,8,  NOTE_F4,4, NOTE_E4,8, NOTE_E4,8, NOTE_E4,8,
  NOTE_E4,8,  NOTE_G4,16, NOTE_G4,16, NOTE_G4,8,  NOTE_G4,4, NOTE_E4,8, NOTE_E4,8, NOTE_E4,8,
  NOTE_E4,8,  NOTE_F4,16, NOTE_F4,16, NOTE_F4,8,  NOTE_F4,4, NOTE_E4,8, NOTE_E4,8, NOTE_E4,8,
  NOTE_E4,8,  NOTE_G4,16, NOTE_G4,16, NOTE_G4,8,  NOTE_G4,4, NOTE_E4,8, NOTE_E4,8, NOTE_E4,8,
  NOTE_DS5,8, NOTE_D5,2,  NOTE_B4,8,  NOTE_A4,8,  NOTE_B4,1,
  NOTE_E4,8,  NOTE_G4,4,  NOTE_DS5,8, NOTE_D5,4,  NOTE_G4,8, NOTE_B4,8,
  NOTE_B4,8,  NOTE_FS5,8, NOTE_F5,4,  NOTE_B4,8,  NOTE_D5,4, NOTE_AS5,8,
  NOTE_A5,4,  NOTE_F5,8,  NOTE_A5,4,  NOTE_DS6,8, NOTE_D6,3
};


int march[] = {
  NOTE_A3,Q,   NOTE_A3,Q, NOTE_A3,Q, 
  NOTE_F3,E+S, NOTE_C4,S, NOTE_A3,Q, 
  NOTE_F3,E+S, NOTE_C4,S, NOTE_A3,H,
    
  NOTE_E4,Q,   NOTE_E4,Q, NOTE_E4,Q, 
  NOTE_F4,E+S, NOTE_C4,S, NOTE_GS3,Q, 
  NOTE_F3,E+S, NOTE_C4,S, NOTE_A3,H, 

  NOTE_A4,Q,  NOTE_A3,E+S, NOTE_A3,S, NOTE_A4,Q, NOTE_GS4,E+S, NOTE_G4,S, 
  NOTE_FS4,S, NOTE_E4,S,   NOTE_F4,E, 0,1+E,

  NOTE_AS3,E, NOTE_DS4,Q, NOTE_D4,E+S, NOTE_CS4,S, 
  NOTE_C4,S,  NOTE_B3,S,  NOTE_C4,E,   0,1+E,
  
  NOTE_F3,E,  NOTE_GS3,Q,  NOTE_F3,E+S, NOTE_A3,S, 
  NOTE_C4,Q,  NOTE_A3,E+S, NOTE_C4,S,   NOTE_E4,H, 
  NOTE_A4,Q,  NOTE_A3,E+S, NOTE_A3,S,   NOTE_A4,Q, NOTE_GS4,E+S, NOTE_G4,S, 
  NOTE_FS4,S, NOTE_E4,S,   NOTE_F4,E,   0,1+E,

  NOTE_AS3,E, NOTE_DS4,Q,  NOTE_D4,E+S, NOTE_CS4,S, 
  NOTE_C4,S,  NOTE_B3,S,   NOTE_C4,E,   0,1+E,
  NOTE_F3,E,  NOTE_GS3,Q,  NOTE_F3,E+S, NOTE_C4,S, 
  NOTE_A3,Q,  NOTE_F3,E+S, NOTE_C4,S,   NOTE_A3,H, 
  0,2*H
};

int monkey[] = {
    NOTE_A5,S,  NOTE_B5,S,  NOTE_AS5,S, NOTE_A5,S,  NOTE_G5,S,  NOTE_A5,S,  0,S,        0,S,        0,S,       0,S, 
    NOTE_G5,S,  NOTE_G5,S,  NOTE_F5,S,  NOTE_E5,S,  NOTE_G5,S,  NOTE_F5,S,  NOTE_F5,S,  NOTE_E5,S,  NOTE_GS4,  0,S,        0,S,        0,S, 0,S, 
    NOTE_A5,S,  NOTE_B5,S,  NOTE_AS5,S, NOTE_A5,S,  NOTE_G5,S,  NOTE_A5,S,  0,S,        NOTE_B5,S,  NOTE_D6,S, 0,S,        NOTE_AS5,S, 0,S, 0,S, 0,S, 0,S, 
    NOTE_B5,S,  NOTE_AS5,S, NOTE_A5,S,  NOTE_G5,S,  NOTE_AS5,S, NOTE_B5,S,  NOTE_B5,S,  NOTE_AS5,S, 0,S,       NOTE_A5,S,  0,S,        0,S, 0,S, 0,S, //bis
    NOTE_B5,S,  NOTE_AS5,S, NOTE_A5,S,  NOTE_G5,S,  NOTE_AS5,S, NOTE_B5,S,  NOTE_B5,S,  NOTE_AS5,S, 0,S,       NOTE_A5,S,  0,S,        0,S, 0,S, 0,S, //bis
    NOTE_B5,S,  NOTE_AS5,S, NOTE_A5,S,  NOTE_G5,S,  NOTE_A5,S,  0,S,        0,S,        0,S,        0,S,
    NOTE_G5,S,  NOTE_G5,S,  NOTE_F5,S,  NOTE_E5,S,  NOTE_G5,S,  NOTE_F5,S,  NOTE_F5,S,  NOTE_E5,S,  NOTE_AS4,S
};



