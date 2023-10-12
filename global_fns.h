// Project:	DLX 
// Entity	Global Functions
// File		globals_fns.h
// Date:	26 Sept 2000

int pow(int, int);  // forms exponential without using doubles

float floatFromInt(int v);
int floatToInt(float d);


class t_reg_args Decode_Register(char *Instruction);

int Decode_LOAD(t_dlx_instrn_set Instruction);

int Decode_STORE(t_dlx_instrn_set Instruction);

int Decode_MOVE(t_dlx_instrn_set Instruction);

int Decode_ALU(t_dlx_instrn_set Instruction);

int Decode_ALUI(t_dlx_instrn_set Instruction);

int Decode_JIMM(t_dlx_instrn_set Instruction);

int Decode_JREG(t_dlx_instrn_set Instruction);

int Decode_BRNC(t_dlx_instrn_set Instruction);

int Decode_FLPT(t_dlx_instrn_set Instruction);

int Decode_COMP(t_dlx_instrn_set Instruction);

int Decode_DBL(t_dlx_instrn_set Instruction);

int is_a_function(t_dlx_instrn_set Instruction);





