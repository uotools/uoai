#ifndef PACKETDEFS_INCLUDED
#define PACKETDEFS_INCLUDED

#include "Streams.h"
#include "COMBase.h"

// do not touch this file
// to add support for packet with cmd n
//	- typedef the packet_n struct in packets.h
//	- implement all corresponding functions in packets.c (serialize_n, ..., packet_n_set_field_value)
//	- enable the packet in the handler table in packetstable.c (set the enabled field to true for the right CMD)

typedef void * (*pDeserializePacket)(Stream ** fromstream, unsigned short size);
typedef unsigned short (*pSerializePacket)(Stream ** tostream, void * toserialize);
typedef void * (*pCreatePacket)();
typedef void (*pDestroyPacket)(void * todestroy);
typedef void (*pPrintPacket)(void * toprint);
typedef unsigned int (*pPacketIdOfField)(void * onpacket, char * name);
typedef VARIANT * (*pPacketGetField)(void * onpacket, unsigned int id);
typedef int (*pPacketSetField)(void * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct
{
	unsigned char cmd;
	char * name;
	int enabled;
	pSerializePacket serialize;
	pDeserializePacket deserialize;
	pCreatePacket create;
	pDestroyPacket destroy;
	pPrintPacket print;
	pPacketIdOfField id_of_name;
	pPacketGetField get_field;
	pPacketSetField set_field;
} PacketHandlers;


// auto-generated entries for each of the 256 possible CMDs follow
// fill-in the implementation in packets.c to support a CMD

typedef struct packet_0_struct packet_0;
packet_0 * deserialize_0(Stream ** fromstream, unsigned short size);
unsigned short serialize_0(Stream ** tostream, packet_0 * toserialize);
packet_0 * create_0();
void destroy_0(packet_0 * todestroy);
void printpacket_0(packet_0 * toprint);
unsigned int packet_0_id_of_field(packet_0 * onpacket, char * name);
VARIANT * packet_0_get_field_value(packet_0 * onpacket, unsigned int id);
int packet_0_set_field_value(packet_0 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_1_struct packet_1;
packet_1 * deserialize_1(Stream ** fromstream, unsigned short size);
unsigned short serialize_1(Stream ** tostream, packet_1 * toserialize);
packet_1 * create_1();
void destroy_1(packet_1 * todestroy);
void printpacket_1(packet_1 * toprint);
unsigned int packet_1_id_of_field(packet_1 * onpacket, char * name);
VARIANT * packet_1_get_field_value(packet_1 * onpacket, unsigned int id);
int packet_1_set_field_value(packet_1 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_2_struct packet_2;
packet_2 * deserialize_2(Stream ** fromstream, unsigned short size);
unsigned short serialize_2(Stream ** tostream, packet_2 * toserialize);
packet_2 * create_2();
void destroy_2(packet_2 * todestroy);
void printpacket_2(packet_2 * toprint);
unsigned int packet_2_id_of_field(packet_2 * onpacket, char * name);
VARIANT * packet_2_get_field_value(packet_2 * onpacket, unsigned int id);
int packet_2_set_field_value(packet_2 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_3_struct packet_3;
packet_3 * deserialize_3(Stream ** fromstream, unsigned short size);
unsigned short serialize_3(Stream ** tostream, packet_3 * toserialize);
packet_3 * create_3();
void destroy_3(packet_3 * todestroy);
void printpacket_3(packet_3 * toprint);
unsigned int packet_3_id_of_field(packet_3 * onpacket, char * name);
VARIANT * packet_3_get_field_value(packet_3 * onpacket, unsigned int id);
int packet_3_set_field_value(packet_3 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_4_struct packet_4;
packet_4 * deserialize_4(Stream ** fromstream, unsigned short size);
unsigned short serialize_4(Stream ** tostream, packet_4 * toserialize);
packet_4 * create_4();
void destroy_4(packet_4 * todestroy);
void printpacket_4(packet_4 * toprint);
unsigned int packet_4_id_of_field(packet_4 * onpacket, char * name);
VARIANT * packet_4_get_field_value(packet_4 * onpacket, unsigned int id);
int packet_4_set_field_value(packet_4 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_5_struct packet_5;
packet_5 * deserialize_5(Stream ** fromstream, unsigned short size);
unsigned short serialize_5(Stream ** tostream, packet_5 * toserialize);
packet_5 * create_5();
void destroy_5(packet_5 * todestroy);
void printpacket_5(packet_5 * toprint);
unsigned int packet_5_id_of_field(packet_5 * onpacket, char * name);
VARIANT * packet_5_get_field_value(packet_5 * onpacket, unsigned int id);
int packet_5_set_field_value(packet_5 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_6_struct packet_6;
packet_6 * deserialize_6(Stream ** fromstream, unsigned short size);
unsigned short serialize_6(Stream ** tostream, packet_6 * toserialize);
packet_6 * create_6();
void destroy_6(packet_6 * todestroy);
void printpacket_6(packet_6 * toprint);
unsigned int packet_6_id_of_field(packet_6 * onpacket, char * name);
VARIANT * packet_6_get_field_value(packet_6 * onpacket, unsigned int id);
int packet_6_set_field_value(packet_6 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_7_struct packet_7;
packet_7 * deserialize_7(Stream ** fromstream, unsigned short size);
unsigned short serialize_7(Stream ** tostream, packet_7 * toserialize);
packet_7 * create_7();
void destroy_7(packet_7 * todestroy);
void printpacket_7(packet_7 * toprint);
unsigned int packet_7_id_of_field(packet_7 * onpacket, char * name);
VARIANT * packet_7_get_field_value(packet_7 * onpacket, unsigned int id);
int packet_7_set_field_value(packet_7 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_8_struct packet_8;
packet_8 * deserialize_8(Stream ** fromstream, unsigned short size);
unsigned short serialize_8(Stream ** tostream, packet_8 * toserialize);
packet_8 * create_8();
void destroy_8(packet_8 * todestroy);
void printpacket_8(packet_8 * toprint);
unsigned int packet_8_id_of_field(packet_8 * onpacket, char * name);
VARIANT * packet_8_get_field_value(packet_8 * onpacket, unsigned int id);
int packet_8_set_field_value(packet_8 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_9_struct packet_9;
packet_9 * deserialize_9(Stream ** fromstream, unsigned short size);
unsigned short serialize_9(Stream ** tostream, packet_9 * toserialize);
packet_9 * create_9();
void destroy_9(packet_9 * todestroy);
void printpacket_9(packet_9 * toprint);
unsigned int packet_9_id_of_field(packet_9 * onpacket, char * name);
VARIANT * packet_9_get_field_value(packet_9 * onpacket, unsigned int id);
int packet_9_set_field_value(packet_9 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a_struct packet_a;
packet_a * deserialize_a(Stream ** fromstream, unsigned short size);
unsigned short serialize_a(Stream ** tostream, packet_a * toserialize);
packet_a * create_a();
void destroy_a(packet_a * todestroy);
void printpacket_a(packet_a * toprint);
unsigned int packet_a_id_of_field(packet_a * onpacket, char * name);
VARIANT * packet_a_get_field_value(packet_a * onpacket, unsigned int id);
int packet_a_set_field_value(packet_a * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b_struct packet_b;
packet_b * deserialize_b(Stream ** fromstream, unsigned short size);
unsigned short serialize_b(Stream ** tostream, packet_b * toserialize);
packet_b * create_b();
void destroy_b(packet_b * todestroy);
void printpacket_b(packet_b * toprint);
unsigned int packet_b_id_of_field(packet_b * onpacket, char * name);
VARIANT * packet_b_get_field_value(packet_b * onpacket, unsigned int id);
int packet_b_set_field_value(packet_b * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c_struct packet_c;
packet_c * deserialize_c(Stream ** fromstream, unsigned short size);
unsigned short serialize_c(Stream ** tostream, packet_c * toserialize);
packet_c * create_c();
void destroy_c(packet_c * todestroy);
void printpacket_c(packet_c * toprint);
unsigned int packet_c_id_of_field(packet_c * onpacket, char * name);
VARIANT * packet_c_get_field_value(packet_c * onpacket, unsigned int id);
int packet_c_set_field_value(packet_c * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d_struct packet_d;
packet_d * deserialize_d(Stream ** fromstream, unsigned short size);
unsigned short serialize_d(Stream ** tostream, packet_d * toserialize);
packet_d * create_d();
void destroy_d(packet_d * todestroy);
void printpacket_d(packet_d * toprint);
unsigned int packet_d_id_of_field(packet_d * onpacket, char * name);
VARIANT * packet_d_get_field_value(packet_d * onpacket, unsigned int id);
int packet_d_set_field_value(packet_d * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e_struct packet_e;
packet_e * deserialize_e(Stream ** fromstream, unsigned short size);
unsigned short serialize_e(Stream ** tostream, packet_e * toserialize);
packet_e * create_e();
void destroy_e(packet_e * todestroy);
void printpacket_e(packet_e * toprint);
unsigned int packet_e_id_of_field(packet_e * onpacket, char * name);
VARIANT * packet_e_get_field_value(packet_e * onpacket, unsigned int id);
int packet_e_set_field_value(packet_e * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f_struct packet_f;
packet_f * deserialize_f(Stream ** fromstream, unsigned short size);
unsigned short serialize_f(Stream ** tostream, packet_f * toserialize);
packet_f * create_f();
void destroy_f(packet_f * todestroy);
void printpacket_f(packet_f * toprint);
unsigned int packet_f_id_of_field(packet_f * onpacket, char * name);
VARIANT * packet_f_get_field_value(packet_f * onpacket, unsigned int id);
int packet_f_set_field_value(packet_f * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_10_struct packet_10;
packet_10 * deserialize_10(Stream ** fromstream, unsigned short size);
unsigned short serialize_10(Stream ** tostream, packet_10 * toserialize);
packet_10 * create_10();
void destroy_10(packet_10 * todestroy);
void printpacket_10(packet_10 * toprint);
unsigned int packet_10_id_of_field(packet_10 * onpacket, char * name);
VARIANT * packet_10_get_field_value(packet_10 * onpacket, unsigned int id);
int packet_10_set_field_value(packet_10 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_11_struct packet_11;
packet_11 * deserialize_11(Stream ** fromstream, unsigned short size);
unsigned short serialize_11(Stream ** tostream, packet_11 * toserialize);
packet_11 * create_11();
void destroy_11(packet_11 * todestroy);
void printpacket_11(packet_11 * toprint);
unsigned int packet_11_id_of_field(packet_11 * onpacket, char * name);
VARIANT * packet_11_get_field_value(packet_11 * onpacket, unsigned int id);
int packet_11_set_field_value(packet_11 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_12_struct packet_12;
packet_12 * deserialize_12(Stream ** fromstream, unsigned short size);
unsigned short serialize_12(Stream ** tostream, packet_12 * toserialize);
packet_12 * create_12();
void destroy_12(packet_12 * todestroy);
void printpacket_12(packet_12 * toprint);
unsigned int packet_12_id_of_field(packet_12 * onpacket, char * name);
VARIANT * packet_12_get_field_value(packet_12 * onpacket, unsigned int id);
int packet_12_set_field_value(packet_12 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_13_struct packet_13;
packet_13 * deserialize_13(Stream ** fromstream, unsigned short size);
unsigned short serialize_13(Stream ** tostream, packet_13 * toserialize);
packet_13 * create_13();
void destroy_13(packet_13 * todestroy);
void printpacket_13(packet_13 * toprint);
unsigned int packet_13_id_of_field(packet_13 * onpacket, char * name);
VARIANT * packet_13_get_field_value(packet_13 * onpacket, unsigned int id);
int packet_13_set_field_value(packet_13 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_14_struct packet_14;
packet_14 * deserialize_14(Stream ** fromstream, unsigned short size);
unsigned short serialize_14(Stream ** tostream, packet_14 * toserialize);
packet_14 * create_14();
void destroy_14(packet_14 * todestroy);
void printpacket_14(packet_14 * toprint);
unsigned int packet_14_id_of_field(packet_14 * onpacket, char * name);
VARIANT * packet_14_get_field_value(packet_14 * onpacket, unsigned int id);
int packet_14_set_field_value(packet_14 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_15_struct packet_15;
packet_15 * deserialize_15(Stream ** fromstream, unsigned short size);
unsigned short serialize_15(Stream ** tostream, packet_15 * toserialize);
packet_15 * create_15();
void destroy_15(packet_15 * todestroy);
void printpacket_15(packet_15 * toprint);
unsigned int packet_15_id_of_field(packet_15 * onpacket, char * name);
VARIANT * packet_15_get_field_value(packet_15 * onpacket, unsigned int id);
int packet_15_set_field_value(packet_15 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_16_struct packet_16;
packet_16 * deserialize_16(Stream ** fromstream, unsigned short size);
unsigned short serialize_16(Stream ** tostream, packet_16 * toserialize);
packet_16 * create_16();
void destroy_16(packet_16 * todestroy);
void printpacket_16(packet_16 * toprint);
unsigned int packet_16_id_of_field(packet_16 * onpacket, char * name);
VARIANT * packet_16_get_field_value(packet_16 * onpacket, unsigned int id);
int packet_16_set_field_value(packet_16 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_17_struct packet_17;
packet_17 * deserialize_17(Stream ** fromstream, unsigned short size);
unsigned short serialize_17(Stream ** tostream, packet_17 * toserialize);
packet_17 * create_17();
void destroy_17(packet_17 * todestroy);
void printpacket_17(packet_17 * toprint);
unsigned int packet_17_id_of_field(packet_17 * onpacket, char * name);
VARIANT * packet_17_get_field_value(packet_17 * onpacket, unsigned int id);
int packet_17_set_field_value(packet_17 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_18_struct packet_18;
packet_18 * deserialize_18(Stream ** fromstream, unsigned short size);
unsigned short serialize_18(Stream ** tostream, packet_18 * toserialize);
packet_18 * create_18();
void destroy_18(packet_18 * todestroy);
void printpacket_18(packet_18 * toprint);
unsigned int packet_18_id_of_field(packet_18 * onpacket, char * name);
VARIANT * packet_18_get_field_value(packet_18 * onpacket, unsigned int id);
int packet_18_set_field_value(packet_18 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_19_struct packet_19;
packet_19 * deserialize_19(Stream ** fromstream, unsigned short size);
unsigned short serialize_19(Stream ** tostream, packet_19 * toserialize);
packet_19 * create_19();
void destroy_19(packet_19 * todestroy);
void printpacket_19(packet_19 * toprint);
unsigned int packet_19_id_of_field(packet_19 * onpacket, char * name);
VARIANT * packet_19_get_field_value(packet_19 * onpacket, unsigned int id);
int packet_19_set_field_value(packet_19 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_1a_struct packet_1a;
packet_1a * deserialize_1a(Stream ** fromstream, unsigned short size);
unsigned short serialize_1a(Stream ** tostream, packet_1a * toserialize);
packet_1a * create_1a();
void destroy_1a(packet_1a * todestroy);
void printpacket_1a(packet_1a * toprint);
unsigned int packet_1a_id_of_field(packet_1a * onpacket, char * name);
VARIANT * packet_1a_get_field_value(packet_1a * onpacket, unsigned int id);
int packet_1a_set_field_value(packet_1a * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_1b_struct packet_1b;
packet_1b * deserialize_1b(Stream ** fromstream, unsigned short size);
unsigned short serialize_1b(Stream ** tostream, packet_1b * toserialize);
packet_1b * create_1b();
void destroy_1b(packet_1b * todestroy);
void printpacket_1b(packet_1b * toprint);
unsigned int packet_1b_id_of_field(packet_1b * onpacket, char * name);
VARIANT * packet_1b_get_field_value(packet_1b * onpacket, unsigned int id);
int packet_1b_set_field_value(packet_1b * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_1c_struct packet_1c;
packet_1c * deserialize_1c(Stream ** fromstream, unsigned short size);
unsigned short serialize_1c(Stream ** tostream, packet_1c * toserialize);
packet_1c * create_1c();
void destroy_1c(packet_1c * todestroy);
void printpacket_1c(packet_1c * toprint);
unsigned int packet_1c_id_of_field(packet_1c * onpacket, char * name);
VARIANT * packet_1c_get_field_value(packet_1c * onpacket, unsigned int id);
int packet_1c_set_field_value(packet_1c * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_1d_struct packet_1d;
packet_1d * deserialize_1d(Stream ** fromstream, unsigned short size);
unsigned short serialize_1d(Stream ** tostream, packet_1d * toserialize);
packet_1d * create_1d();
void destroy_1d(packet_1d * todestroy);
void printpacket_1d(packet_1d * toprint);
unsigned int packet_1d_id_of_field(packet_1d * onpacket, char * name);
VARIANT * packet_1d_get_field_value(packet_1d * onpacket, unsigned int id);
int packet_1d_set_field_value(packet_1d * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_1e_struct packet_1e;
packet_1e * deserialize_1e(Stream ** fromstream, unsigned short size);
unsigned short serialize_1e(Stream ** tostream, packet_1e * toserialize);
packet_1e * create_1e();
void destroy_1e(packet_1e * todestroy);
void printpacket_1e(packet_1e * toprint);
unsigned int packet_1e_id_of_field(packet_1e * onpacket, char * name);
VARIANT * packet_1e_get_field_value(packet_1e * onpacket, unsigned int id);
int packet_1e_set_field_value(packet_1e * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_1f_struct packet_1f;
packet_1f * deserialize_1f(Stream ** fromstream, unsigned short size);
unsigned short serialize_1f(Stream ** tostream, packet_1f * toserialize);
packet_1f * create_1f();
void destroy_1f(packet_1f * todestroy);
void printpacket_1f(packet_1f * toprint);
unsigned int packet_1f_id_of_field(packet_1f * onpacket, char * name);
VARIANT * packet_1f_get_field_value(packet_1f * onpacket, unsigned int id);
int packet_1f_set_field_value(packet_1f * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_20_struct packet_20;
packet_20 * deserialize_20(Stream ** fromstream, unsigned short size);
unsigned short serialize_20(Stream ** tostream, packet_20 * toserialize);
packet_20 * create_20();
void destroy_20(packet_20 * todestroy);
void printpacket_20(packet_20 * toprint);
unsigned int packet_20_id_of_field(packet_20 * onpacket, char * name);
VARIANT * packet_20_get_field_value(packet_20 * onpacket, unsigned int id);
int packet_20_set_field_value(packet_20 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_21_struct packet_21;
packet_21 * deserialize_21(Stream ** fromstream, unsigned short size);
unsigned short serialize_21(Stream ** tostream, packet_21 * toserialize);
packet_21 * create_21();
void destroy_21(packet_21 * todestroy);
void printpacket_21(packet_21 * toprint);
unsigned int packet_21_id_of_field(packet_21 * onpacket, char * name);
VARIANT * packet_21_get_field_value(packet_21 * onpacket, unsigned int id);
int packet_21_set_field_value(packet_21 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_22_struct packet_22;
packet_22 * deserialize_22(Stream ** fromstream, unsigned short size);
unsigned short serialize_22(Stream ** tostream, packet_22 * toserialize);
packet_22 * create_22();
void destroy_22(packet_22 * todestroy);
void printpacket_22(packet_22 * toprint);
unsigned int packet_22_id_of_field(packet_22 * onpacket, char * name);
VARIANT * packet_22_get_field_value(packet_22 * onpacket, unsigned int id);
int packet_22_set_field_value(packet_22 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_23_struct packet_23;
packet_23 * deserialize_23(Stream ** fromstream, unsigned short size);
unsigned short serialize_23(Stream ** tostream, packet_23 * toserialize);
packet_23 * create_23();
void destroy_23(packet_23 * todestroy);
void printpacket_23(packet_23 * toprint);
unsigned int packet_23_id_of_field(packet_23 * onpacket, char * name);
VARIANT * packet_23_get_field_value(packet_23 * onpacket, unsigned int id);
int packet_23_set_field_value(packet_23 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_24_struct packet_24;
packet_24 * deserialize_24(Stream ** fromstream, unsigned short size);
unsigned short serialize_24(Stream ** tostream, packet_24 * toserialize);
packet_24 * create_24();
void destroy_24(packet_24 * todestroy);
void printpacket_24(packet_24 * toprint);
unsigned int packet_24_id_of_field(packet_24 * onpacket, char * name);
VARIANT * packet_24_get_field_value(packet_24 * onpacket, unsigned int id);
int packet_24_set_field_value(packet_24 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_25_struct packet_25;
packet_25 * deserialize_25(Stream ** fromstream, unsigned short size);
unsigned short serialize_25(Stream ** tostream, packet_25 * toserialize);
packet_25 * create_25();
void destroy_25(packet_25 * todestroy);
void printpacket_25(packet_25 * toprint);
unsigned int packet_25_id_of_field(packet_25 * onpacket, char * name);
VARIANT * packet_25_get_field_value(packet_25 * onpacket, unsigned int id);
int packet_25_set_field_value(packet_25 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_26_struct packet_26;
packet_26 * deserialize_26(Stream ** fromstream, unsigned short size);
unsigned short serialize_26(Stream ** tostream, packet_26 * toserialize);
packet_26 * create_26();
void destroy_26(packet_26 * todestroy);
void printpacket_26(packet_26 * toprint);
unsigned int packet_26_id_of_field(packet_26 * onpacket, char * name);
VARIANT * packet_26_get_field_value(packet_26 * onpacket, unsigned int id);
int packet_26_set_field_value(packet_26 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_27_struct packet_27;
packet_27 * deserialize_27(Stream ** fromstream, unsigned short size);
unsigned short serialize_27(Stream ** tostream, packet_27 * toserialize);
packet_27 * create_27();
void destroy_27(packet_27 * todestroy);
void printpacket_27(packet_27 * toprint);
unsigned int packet_27_id_of_field(packet_27 * onpacket, char * name);
VARIANT * packet_27_get_field_value(packet_27 * onpacket, unsigned int id);
int packet_27_set_field_value(packet_27 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_28_struct packet_28;
packet_28 * deserialize_28(Stream ** fromstream, unsigned short size);
unsigned short serialize_28(Stream ** tostream, packet_28 * toserialize);
packet_28 * create_28();
void destroy_28(packet_28 * todestroy);
void printpacket_28(packet_28 * toprint);
unsigned int packet_28_id_of_field(packet_28 * onpacket, char * name);
VARIANT * packet_28_get_field_value(packet_28 * onpacket, unsigned int id);
int packet_28_set_field_value(packet_28 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_29_struct packet_29;
packet_29 * deserialize_29(Stream ** fromstream, unsigned short size);
unsigned short serialize_29(Stream ** tostream, packet_29 * toserialize);
packet_29 * create_29();
void destroy_29(packet_29 * todestroy);
void printpacket_29(packet_29 * toprint);
unsigned int packet_29_id_of_field(packet_29 * onpacket, char * name);
VARIANT * packet_29_get_field_value(packet_29 * onpacket, unsigned int id);
int packet_29_set_field_value(packet_29 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_2a_struct packet_2a;
packet_2a * deserialize_2a(Stream ** fromstream, unsigned short size);
unsigned short serialize_2a(Stream ** tostream, packet_2a * toserialize);
packet_2a * create_2a();
void destroy_2a(packet_2a * todestroy);
void printpacket_2a(packet_2a * toprint);
unsigned int packet_2a_id_of_field(packet_2a * onpacket, char * name);
VARIANT * packet_2a_get_field_value(packet_2a * onpacket, unsigned int id);
int packet_2a_set_field_value(packet_2a * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_2b_struct packet_2b;
packet_2b * deserialize_2b(Stream ** fromstream, unsigned short size);
unsigned short serialize_2b(Stream ** tostream, packet_2b * toserialize);
packet_2b * create_2b();
void destroy_2b(packet_2b * todestroy);
void printpacket_2b(packet_2b * toprint);
unsigned int packet_2b_id_of_field(packet_2b * onpacket, char * name);
VARIANT * packet_2b_get_field_value(packet_2b * onpacket, unsigned int id);
int packet_2b_set_field_value(packet_2b * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_2c_struct packet_2c;
packet_2c * deserialize_2c(Stream ** fromstream, unsigned short size);
unsigned short serialize_2c(Stream ** tostream, packet_2c * toserialize);
packet_2c * create_2c();
void destroy_2c(packet_2c * todestroy);
void printpacket_2c(packet_2c * toprint);
unsigned int packet_2c_id_of_field(packet_2c * onpacket, char * name);
VARIANT * packet_2c_get_field_value(packet_2c * onpacket, unsigned int id);
int packet_2c_set_field_value(packet_2c * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_2d_struct packet_2d;
packet_2d * deserialize_2d(Stream ** fromstream, unsigned short size);
unsigned short serialize_2d(Stream ** tostream, packet_2d * toserialize);
packet_2d * create_2d();
void destroy_2d(packet_2d * todestroy);
void printpacket_2d(packet_2d * toprint);
unsigned int packet_2d_id_of_field(packet_2d * onpacket, char * name);
VARIANT * packet_2d_get_field_value(packet_2d * onpacket, unsigned int id);
int packet_2d_set_field_value(packet_2d * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_2e_struct packet_2e;
packet_2e * deserialize_2e(Stream ** fromstream, unsigned short size);
unsigned short serialize_2e(Stream ** tostream, packet_2e * toserialize);
packet_2e * create_2e();
void destroy_2e(packet_2e * todestroy);
void printpacket_2e(packet_2e * toprint);
unsigned int packet_2e_id_of_field(packet_2e * onpacket, char * name);
VARIANT * packet_2e_get_field_value(packet_2e * onpacket, unsigned int id);
int packet_2e_set_field_value(packet_2e * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_2f_struct packet_2f;
packet_2f * deserialize_2f(Stream ** fromstream, unsigned short size);
unsigned short serialize_2f(Stream ** tostream, packet_2f * toserialize);
packet_2f * create_2f();
void destroy_2f(packet_2f * todestroy);
void printpacket_2f(packet_2f * toprint);
unsigned int packet_2f_id_of_field(packet_2f * onpacket, char * name);
VARIANT * packet_2f_get_field_value(packet_2f * onpacket, unsigned int id);
int packet_2f_set_field_value(packet_2f * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_30_struct packet_30;
packet_30 * deserialize_30(Stream ** fromstream, unsigned short size);
unsigned short serialize_30(Stream ** tostream, packet_30 * toserialize);
packet_30 * create_30();
void destroy_30(packet_30 * todestroy);
void printpacket_30(packet_30 * toprint);
unsigned int packet_30_id_of_field(packet_30 * onpacket, char * name);
VARIANT * packet_30_get_field_value(packet_30 * onpacket, unsigned int id);
int packet_30_set_field_value(packet_30 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_31_struct packet_31;
packet_31 * deserialize_31(Stream ** fromstream, unsigned short size);
unsigned short serialize_31(Stream ** tostream, packet_31 * toserialize);
packet_31 * create_31();
void destroy_31(packet_31 * todestroy);
void printpacket_31(packet_31 * toprint);
unsigned int packet_31_id_of_field(packet_31 * onpacket, char * name);
VARIANT * packet_31_get_field_value(packet_31 * onpacket, unsigned int id);
int packet_31_set_field_value(packet_31 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_32_struct packet_32;
packet_32 * deserialize_32(Stream ** fromstream, unsigned short size);
unsigned short serialize_32(Stream ** tostream, packet_32 * toserialize);
packet_32 * create_32();
void destroy_32(packet_32 * todestroy);
void printpacket_32(packet_32 * toprint);
unsigned int packet_32_id_of_field(packet_32 * onpacket, char * name);
VARIANT * packet_32_get_field_value(packet_32 * onpacket, unsigned int id);
int packet_32_set_field_value(packet_32 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_33_struct packet_33;
packet_33 * deserialize_33(Stream ** fromstream, unsigned short size);
unsigned short serialize_33(Stream ** tostream, packet_33 * toserialize);
packet_33 * create_33();
void destroy_33(packet_33 * todestroy);
void printpacket_33(packet_33 * toprint);
unsigned int packet_33_id_of_field(packet_33 * onpacket, char * name);
VARIANT * packet_33_get_field_value(packet_33 * onpacket, unsigned int id);
int packet_33_set_field_value(packet_33 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_34_struct packet_34;
packet_34 * deserialize_34(Stream ** fromstream, unsigned short size);
unsigned short serialize_34(Stream ** tostream, packet_34 * toserialize);
packet_34 * create_34();
void destroy_34(packet_34 * todestroy);
void printpacket_34(packet_34 * toprint);
unsigned int packet_34_id_of_field(packet_34 * onpacket, char * name);
VARIANT * packet_34_get_field_value(packet_34 * onpacket, unsigned int id);
int packet_34_set_field_value(packet_34 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_35_struct packet_35;
packet_35 * deserialize_35(Stream ** fromstream, unsigned short size);
unsigned short serialize_35(Stream ** tostream, packet_35 * toserialize);
packet_35 * create_35();
void destroy_35(packet_35 * todestroy);
void printpacket_35(packet_35 * toprint);
unsigned int packet_35_id_of_field(packet_35 * onpacket, char * name);
VARIANT * packet_35_get_field_value(packet_35 * onpacket, unsigned int id);
int packet_35_set_field_value(packet_35 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_36_struct packet_36;
packet_36 * deserialize_36(Stream ** fromstream, unsigned short size);
unsigned short serialize_36(Stream ** tostream, packet_36 * toserialize);
packet_36 * create_36();
void destroy_36(packet_36 * todestroy);
void printpacket_36(packet_36 * toprint);
unsigned int packet_36_id_of_field(packet_36 * onpacket, char * name);
VARIANT * packet_36_get_field_value(packet_36 * onpacket, unsigned int id);
int packet_36_set_field_value(packet_36 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_37_struct packet_37;
packet_37 * deserialize_37(Stream ** fromstream, unsigned short size);
unsigned short serialize_37(Stream ** tostream, packet_37 * toserialize);
packet_37 * create_37();
void destroy_37(packet_37 * todestroy);
void printpacket_37(packet_37 * toprint);
unsigned int packet_37_id_of_field(packet_37 * onpacket, char * name);
VARIANT * packet_37_get_field_value(packet_37 * onpacket, unsigned int id);
int packet_37_set_field_value(packet_37 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_38_struct packet_38;
packet_38 * deserialize_38(Stream ** fromstream, unsigned short size);
unsigned short serialize_38(Stream ** tostream, packet_38 * toserialize);
packet_38 * create_38();
void destroy_38(packet_38 * todestroy);
void printpacket_38(packet_38 * toprint);
unsigned int packet_38_id_of_field(packet_38 * onpacket, char * name);
VARIANT * packet_38_get_field_value(packet_38 * onpacket, unsigned int id);
int packet_38_set_field_value(packet_38 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_39_struct packet_39;
packet_39 * deserialize_39(Stream ** fromstream, unsigned short size);
unsigned short serialize_39(Stream ** tostream, packet_39 * toserialize);
packet_39 * create_39();
void destroy_39(packet_39 * todestroy);
void printpacket_39(packet_39 * toprint);
unsigned int packet_39_id_of_field(packet_39 * onpacket, char * name);
VARIANT * packet_39_get_field_value(packet_39 * onpacket, unsigned int id);
int packet_39_set_field_value(packet_39 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_3a_struct packet_3a;
packet_3a * deserialize_3a(Stream ** fromstream, unsigned short size);
unsigned short serialize_3a(Stream ** tostream, packet_3a * toserialize);
packet_3a * create_3a();
void destroy_3a(packet_3a * todestroy);
void printpacket_3a(packet_3a * toprint);
unsigned int packet_3a_id_of_field(packet_3a * onpacket, char * name);
VARIANT * packet_3a_get_field_value(packet_3a * onpacket, unsigned int id);
int packet_3a_set_field_value(packet_3a * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_3b_struct packet_3b;
packet_3b * deserialize_3b(Stream ** fromstream, unsigned short size);
unsigned short serialize_3b(Stream ** tostream, packet_3b * toserialize);
packet_3b * create_3b();
void destroy_3b(packet_3b * todestroy);
void printpacket_3b(packet_3b * toprint);
unsigned int packet_3b_id_of_field(packet_3b * onpacket, char * name);
VARIANT * packet_3b_get_field_value(packet_3b * onpacket, unsigned int id);
int packet_3b_set_field_value(packet_3b * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_3c_struct packet_3c;
packet_3c * deserialize_3c(Stream ** fromstream, unsigned short size);
unsigned short serialize_3c(Stream ** tostream, packet_3c * toserialize);
packet_3c * create_3c();
void destroy_3c(packet_3c * todestroy);
void printpacket_3c(packet_3c * toprint);
unsigned int packet_3c_id_of_field(packet_3c * onpacket, char * name);
VARIANT * packet_3c_get_field_value(packet_3c * onpacket, unsigned int id);
int packet_3c_set_field_value(packet_3c * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_3d_struct packet_3d;
packet_3d * deserialize_3d(Stream ** fromstream, unsigned short size);
unsigned short serialize_3d(Stream ** tostream, packet_3d * toserialize);
packet_3d * create_3d();
void destroy_3d(packet_3d * todestroy);
void printpacket_3d(packet_3d * toprint);
unsigned int packet_3d_id_of_field(packet_3d * onpacket, char * name);
VARIANT * packet_3d_get_field_value(packet_3d * onpacket, unsigned int id);
int packet_3d_set_field_value(packet_3d * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_3e_struct packet_3e;
packet_3e * deserialize_3e(Stream ** fromstream, unsigned short size);
unsigned short serialize_3e(Stream ** tostream, packet_3e * toserialize);
packet_3e * create_3e();
void destroy_3e(packet_3e * todestroy);
void printpacket_3e(packet_3e * toprint);
unsigned int packet_3e_id_of_field(packet_3e * onpacket, char * name);
VARIANT * packet_3e_get_field_value(packet_3e * onpacket, unsigned int id);
int packet_3e_set_field_value(packet_3e * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_3f_struct packet_3f;
packet_3f * deserialize_3f(Stream ** fromstream, unsigned short size);
unsigned short serialize_3f(Stream ** tostream, packet_3f * toserialize);
packet_3f * create_3f();
void destroy_3f(packet_3f * todestroy);
void printpacket_3f(packet_3f * toprint);
unsigned int packet_3f_id_of_field(packet_3f * onpacket, char * name);
VARIANT * packet_3f_get_field_value(packet_3f * onpacket, unsigned int id);
int packet_3f_set_field_value(packet_3f * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_40_struct packet_40;
packet_40 * deserialize_40(Stream ** fromstream, unsigned short size);
unsigned short serialize_40(Stream ** tostream, packet_40 * toserialize);
packet_40 * create_40();
void destroy_40(packet_40 * todestroy);
void printpacket_40(packet_40 * toprint);
unsigned int packet_40_id_of_field(packet_40 * onpacket, char * name);
VARIANT * packet_40_get_field_value(packet_40 * onpacket, unsigned int id);
int packet_40_set_field_value(packet_40 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_41_struct packet_41;
packet_41 * deserialize_41(Stream ** fromstream, unsigned short size);
unsigned short serialize_41(Stream ** tostream, packet_41 * toserialize);
packet_41 * create_41();
void destroy_41(packet_41 * todestroy);
void printpacket_41(packet_41 * toprint);
unsigned int packet_41_id_of_field(packet_41 * onpacket, char * name);
VARIANT * packet_41_get_field_value(packet_41 * onpacket, unsigned int id);
int packet_41_set_field_value(packet_41 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_42_struct packet_42;
packet_42 * deserialize_42(Stream ** fromstream, unsigned short size);
unsigned short serialize_42(Stream ** tostream, packet_42 * toserialize);
packet_42 * create_42();
void destroy_42(packet_42 * todestroy);
void printpacket_42(packet_42 * toprint);
unsigned int packet_42_id_of_field(packet_42 * onpacket, char * name);
VARIANT * packet_42_get_field_value(packet_42 * onpacket, unsigned int id);
int packet_42_set_field_value(packet_42 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_43_struct packet_43;
packet_43 * deserialize_43(Stream ** fromstream, unsigned short size);
unsigned short serialize_43(Stream ** tostream, packet_43 * toserialize);
packet_43 * create_43();
void destroy_43(packet_43 * todestroy);
void printpacket_43(packet_43 * toprint);
unsigned int packet_43_id_of_field(packet_43 * onpacket, char * name);
VARIANT * packet_43_get_field_value(packet_43 * onpacket, unsigned int id);
int packet_43_set_field_value(packet_43 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_44_struct packet_44;
packet_44 * deserialize_44(Stream ** fromstream, unsigned short size);
unsigned short serialize_44(Stream ** tostream, packet_44 * toserialize);
packet_44 * create_44();
void destroy_44(packet_44 * todestroy);
void printpacket_44(packet_44 * toprint);
unsigned int packet_44_id_of_field(packet_44 * onpacket, char * name);
VARIANT * packet_44_get_field_value(packet_44 * onpacket, unsigned int id);
int packet_44_set_field_value(packet_44 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_45_struct packet_45;
packet_45 * deserialize_45(Stream ** fromstream, unsigned short size);
unsigned short serialize_45(Stream ** tostream, packet_45 * toserialize);
packet_45 * create_45();
void destroy_45(packet_45 * todestroy);
void printpacket_45(packet_45 * toprint);
unsigned int packet_45_id_of_field(packet_45 * onpacket, char * name);
VARIANT * packet_45_get_field_value(packet_45 * onpacket, unsigned int id);
int packet_45_set_field_value(packet_45 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_46_struct packet_46;
packet_46 * deserialize_46(Stream ** fromstream, unsigned short size);
unsigned short serialize_46(Stream ** tostream, packet_46 * toserialize);
packet_46 * create_46();
void destroy_46(packet_46 * todestroy);
void printpacket_46(packet_46 * toprint);
unsigned int packet_46_id_of_field(packet_46 * onpacket, char * name);
VARIANT * packet_46_get_field_value(packet_46 * onpacket, unsigned int id);
int packet_46_set_field_value(packet_46 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_47_struct packet_47;
packet_47 * deserialize_47(Stream ** fromstream, unsigned short size);
unsigned short serialize_47(Stream ** tostream, packet_47 * toserialize);
packet_47 * create_47();
void destroy_47(packet_47 * todestroy);
void printpacket_47(packet_47 * toprint);
unsigned int packet_47_id_of_field(packet_47 * onpacket, char * name);
VARIANT * packet_47_get_field_value(packet_47 * onpacket, unsigned int id);
int packet_47_set_field_value(packet_47 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_48_struct packet_48;
packet_48 * deserialize_48(Stream ** fromstream, unsigned short size);
unsigned short serialize_48(Stream ** tostream, packet_48 * toserialize);
packet_48 * create_48();
void destroy_48(packet_48 * todestroy);
void printpacket_48(packet_48 * toprint);
unsigned int packet_48_id_of_field(packet_48 * onpacket, char * name);
VARIANT * packet_48_get_field_value(packet_48 * onpacket, unsigned int id);
int packet_48_set_field_value(packet_48 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_49_struct packet_49;
packet_49 * deserialize_49(Stream ** fromstream, unsigned short size);
unsigned short serialize_49(Stream ** tostream, packet_49 * toserialize);
packet_49 * create_49();
void destroy_49(packet_49 * todestroy);
void printpacket_49(packet_49 * toprint);
unsigned int packet_49_id_of_field(packet_49 * onpacket, char * name);
VARIANT * packet_49_get_field_value(packet_49 * onpacket, unsigned int id);
int packet_49_set_field_value(packet_49 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_4a_struct packet_4a;
packet_4a * deserialize_4a(Stream ** fromstream, unsigned short size);
unsigned short serialize_4a(Stream ** tostream, packet_4a * toserialize);
packet_4a * create_4a();
void destroy_4a(packet_4a * todestroy);
void printpacket_4a(packet_4a * toprint);
unsigned int packet_4a_id_of_field(packet_4a * onpacket, char * name);
VARIANT * packet_4a_get_field_value(packet_4a * onpacket, unsigned int id);
int packet_4a_set_field_value(packet_4a * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_4b_struct packet_4b;
packet_4b * deserialize_4b(Stream ** fromstream, unsigned short size);
unsigned short serialize_4b(Stream ** tostream, packet_4b * toserialize);
packet_4b * create_4b();
void destroy_4b(packet_4b * todestroy);
void printpacket_4b(packet_4b * toprint);
unsigned int packet_4b_id_of_field(packet_4b * onpacket, char * name);
VARIANT * packet_4b_get_field_value(packet_4b * onpacket, unsigned int id);
int packet_4b_set_field_value(packet_4b * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_4c_struct packet_4c;
packet_4c * deserialize_4c(Stream ** fromstream, unsigned short size);
unsigned short serialize_4c(Stream ** tostream, packet_4c * toserialize);
packet_4c * create_4c();
void destroy_4c(packet_4c * todestroy);
void printpacket_4c(packet_4c * toprint);
unsigned int packet_4c_id_of_field(packet_4c * onpacket, char * name);
VARIANT * packet_4c_get_field_value(packet_4c * onpacket, unsigned int id);
int packet_4c_set_field_value(packet_4c * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_4d_struct packet_4d;
packet_4d * deserialize_4d(Stream ** fromstream, unsigned short size);
unsigned short serialize_4d(Stream ** tostream, packet_4d * toserialize);
packet_4d * create_4d();
void destroy_4d(packet_4d * todestroy);
void printpacket_4d(packet_4d * toprint);
unsigned int packet_4d_id_of_field(packet_4d * onpacket, char * name);
VARIANT * packet_4d_get_field_value(packet_4d * onpacket, unsigned int id);
int packet_4d_set_field_value(packet_4d * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_4e_struct packet_4e;
packet_4e * deserialize_4e(Stream ** fromstream, unsigned short size);
unsigned short serialize_4e(Stream ** tostream, packet_4e * toserialize);
packet_4e * create_4e();
void destroy_4e(packet_4e * todestroy);
void printpacket_4e(packet_4e * toprint);
unsigned int packet_4e_id_of_field(packet_4e * onpacket, char * name);
VARIANT * packet_4e_get_field_value(packet_4e * onpacket, unsigned int id);
int packet_4e_set_field_value(packet_4e * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_4f_struct packet_4f;
packet_4f * deserialize_4f(Stream ** fromstream, unsigned short size);
unsigned short serialize_4f(Stream ** tostream, packet_4f * toserialize);
packet_4f * create_4f();
void destroy_4f(packet_4f * todestroy);
void printpacket_4f(packet_4f * toprint);
unsigned int packet_4f_id_of_field(packet_4f * onpacket, char * name);
VARIANT * packet_4f_get_field_value(packet_4f * onpacket, unsigned int id);
int packet_4f_set_field_value(packet_4f * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_50_struct packet_50;
packet_50 * deserialize_50(Stream ** fromstream, unsigned short size);
unsigned short serialize_50(Stream ** tostream, packet_50 * toserialize);
packet_50 * create_50();
void destroy_50(packet_50 * todestroy);
void printpacket_50(packet_50 * toprint);
unsigned int packet_50_id_of_field(packet_50 * onpacket, char * name);
VARIANT * packet_50_get_field_value(packet_50 * onpacket, unsigned int id);
int packet_50_set_field_value(packet_50 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_51_struct packet_51;
packet_51 * deserialize_51(Stream ** fromstream, unsigned short size);
unsigned short serialize_51(Stream ** tostream, packet_51 * toserialize);
packet_51 * create_51();
void destroy_51(packet_51 * todestroy);
void printpacket_51(packet_51 * toprint);
unsigned int packet_51_id_of_field(packet_51 * onpacket, char * name);
VARIANT * packet_51_get_field_value(packet_51 * onpacket, unsigned int id);
int packet_51_set_field_value(packet_51 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_52_struct packet_52;
packet_52 * deserialize_52(Stream ** fromstream, unsigned short size);
unsigned short serialize_52(Stream ** tostream, packet_52 * toserialize);
packet_52 * create_52();
void destroy_52(packet_52 * todestroy);
void printpacket_52(packet_52 * toprint);
unsigned int packet_52_id_of_field(packet_52 * onpacket, char * name);
VARIANT * packet_52_get_field_value(packet_52 * onpacket, unsigned int id);
int packet_52_set_field_value(packet_52 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_53_struct packet_53;
packet_53 * deserialize_53(Stream ** fromstream, unsigned short size);
unsigned short serialize_53(Stream ** tostream, packet_53 * toserialize);
packet_53 * create_53();
void destroy_53(packet_53 * todestroy);
void printpacket_53(packet_53 * toprint);
unsigned int packet_53_id_of_field(packet_53 * onpacket, char * name);
VARIANT * packet_53_get_field_value(packet_53 * onpacket, unsigned int id);
int packet_53_set_field_value(packet_53 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_54_struct packet_54;
packet_54 * deserialize_54(Stream ** fromstream, unsigned short size);
unsigned short serialize_54(Stream ** tostream, packet_54 * toserialize);
packet_54 * create_54();
void destroy_54(packet_54 * todestroy);
void printpacket_54(packet_54 * toprint);
unsigned int packet_54_id_of_field(packet_54 * onpacket, char * name);
VARIANT * packet_54_get_field_value(packet_54 * onpacket, unsigned int id);
int packet_54_set_field_value(packet_54 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_55_struct packet_55;
packet_55 * deserialize_55(Stream ** fromstream, unsigned short size);
unsigned short serialize_55(Stream ** tostream, packet_55 * toserialize);
packet_55 * create_55();
void destroy_55(packet_55 * todestroy);
void printpacket_55(packet_55 * toprint);
unsigned int packet_55_id_of_field(packet_55 * onpacket, char * name);
VARIANT * packet_55_get_field_value(packet_55 * onpacket, unsigned int id);
int packet_55_set_field_value(packet_55 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_56_struct packet_56;
packet_56 * deserialize_56(Stream ** fromstream, unsigned short size);
unsigned short serialize_56(Stream ** tostream, packet_56 * toserialize);
packet_56 * create_56();
void destroy_56(packet_56 * todestroy);
void printpacket_56(packet_56 * toprint);
unsigned int packet_56_id_of_field(packet_56 * onpacket, char * name);
VARIANT * packet_56_get_field_value(packet_56 * onpacket, unsigned int id);
int packet_56_set_field_value(packet_56 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_57_struct packet_57;
packet_57 * deserialize_57(Stream ** fromstream, unsigned short size);
unsigned short serialize_57(Stream ** tostream, packet_57 * toserialize);
packet_57 * create_57();
void destroy_57(packet_57 * todestroy);
void printpacket_57(packet_57 * toprint);
unsigned int packet_57_id_of_field(packet_57 * onpacket, char * name);
VARIANT * packet_57_get_field_value(packet_57 * onpacket, unsigned int id);
int packet_57_set_field_value(packet_57 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_58_struct packet_58;
packet_58 * deserialize_58(Stream ** fromstream, unsigned short size);
unsigned short serialize_58(Stream ** tostream, packet_58 * toserialize);
packet_58 * create_58();
void destroy_58(packet_58 * todestroy);
void printpacket_58(packet_58 * toprint);
unsigned int packet_58_id_of_field(packet_58 * onpacket, char * name);
VARIANT * packet_58_get_field_value(packet_58 * onpacket, unsigned int id);
int packet_58_set_field_value(packet_58 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_59_struct packet_59;
packet_59 * deserialize_59(Stream ** fromstream, unsigned short size);
unsigned short serialize_59(Stream ** tostream, packet_59 * toserialize);
packet_59 * create_59();
void destroy_59(packet_59 * todestroy);
void printpacket_59(packet_59 * toprint);
unsigned int packet_59_id_of_field(packet_59 * onpacket, char * name);
VARIANT * packet_59_get_field_value(packet_59 * onpacket, unsigned int id);
int packet_59_set_field_value(packet_59 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_5a_struct packet_5a;
packet_5a * deserialize_5a(Stream ** fromstream, unsigned short size);
unsigned short serialize_5a(Stream ** tostream, packet_5a * toserialize);
packet_5a * create_5a();
void destroy_5a(packet_5a * todestroy);
void printpacket_5a(packet_5a * toprint);
unsigned int packet_5a_id_of_field(packet_5a * onpacket, char * name);
VARIANT * packet_5a_get_field_value(packet_5a * onpacket, unsigned int id);
int packet_5a_set_field_value(packet_5a * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_5b_struct packet_5b;
packet_5b * deserialize_5b(Stream ** fromstream, unsigned short size);
unsigned short serialize_5b(Stream ** tostream, packet_5b * toserialize);
packet_5b * create_5b();
void destroy_5b(packet_5b * todestroy);
void printpacket_5b(packet_5b * toprint);
unsigned int packet_5b_id_of_field(packet_5b * onpacket, char * name);
VARIANT * packet_5b_get_field_value(packet_5b * onpacket, unsigned int id);
int packet_5b_set_field_value(packet_5b * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_5c_struct packet_5c;
packet_5c * deserialize_5c(Stream ** fromstream, unsigned short size);
unsigned short serialize_5c(Stream ** tostream, packet_5c * toserialize);
packet_5c * create_5c();
void destroy_5c(packet_5c * todestroy);
void printpacket_5c(packet_5c * toprint);
unsigned int packet_5c_id_of_field(packet_5c * onpacket, char * name);
VARIANT * packet_5c_get_field_value(packet_5c * onpacket, unsigned int id);
int packet_5c_set_field_value(packet_5c * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_5d_struct packet_5d;
packet_5d * deserialize_5d(Stream ** fromstream, unsigned short size);
unsigned short serialize_5d(Stream ** tostream, packet_5d * toserialize);
packet_5d * create_5d();
void destroy_5d(packet_5d * todestroy);
void printpacket_5d(packet_5d * toprint);
unsigned int packet_5d_id_of_field(packet_5d * onpacket, char * name);
VARIANT * packet_5d_get_field_value(packet_5d * onpacket, unsigned int id);
int packet_5d_set_field_value(packet_5d * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_5e_struct packet_5e;
packet_5e * deserialize_5e(Stream ** fromstream, unsigned short size);
unsigned short serialize_5e(Stream ** tostream, packet_5e * toserialize);
packet_5e * create_5e();
void destroy_5e(packet_5e * todestroy);
void printpacket_5e(packet_5e * toprint);
unsigned int packet_5e_id_of_field(packet_5e * onpacket, char * name);
VARIANT * packet_5e_get_field_value(packet_5e * onpacket, unsigned int id);
int packet_5e_set_field_value(packet_5e * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_5f_struct packet_5f;
packet_5f * deserialize_5f(Stream ** fromstream, unsigned short size);
unsigned short serialize_5f(Stream ** tostream, packet_5f * toserialize);
packet_5f * create_5f();
void destroy_5f(packet_5f * todestroy);
void printpacket_5f(packet_5f * toprint);
unsigned int packet_5f_id_of_field(packet_5f * onpacket, char * name);
VARIANT * packet_5f_get_field_value(packet_5f * onpacket, unsigned int id);
int packet_5f_set_field_value(packet_5f * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_60_struct packet_60;
packet_60 * deserialize_60(Stream ** fromstream, unsigned short size);
unsigned short serialize_60(Stream ** tostream, packet_60 * toserialize);
packet_60 * create_60();
void destroy_60(packet_60 * todestroy);
void printpacket_60(packet_60 * toprint);
unsigned int packet_60_id_of_field(packet_60 * onpacket, char * name);
VARIANT * packet_60_get_field_value(packet_60 * onpacket, unsigned int id);
int packet_60_set_field_value(packet_60 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_61_struct packet_61;
packet_61 * deserialize_61(Stream ** fromstream, unsigned short size);
unsigned short serialize_61(Stream ** tostream, packet_61 * toserialize);
packet_61 * create_61();
void destroy_61(packet_61 * todestroy);
void printpacket_61(packet_61 * toprint);
unsigned int packet_61_id_of_field(packet_61 * onpacket, char * name);
VARIANT * packet_61_get_field_value(packet_61 * onpacket, unsigned int id);
int packet_61_set_field_value(packet_61 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_62_struct packet_62;
packet_62 * deserialize_62(Stream ** fromstream, unsigned short size);
unsigned short serialize_62(Stream ** tostream, packet_62 * toserialize);
packet_62 * create_62();
void destroy_62(packet_62 * todestroy);
void printpacket_62(packet_62 * toprint);
unsigned int packet_62_id_of_field(packet_62 * onpacket, char * name);
VARIANT * packet_62_get_field_value(packet_62 * onpacket, unsigned int id);
int packet_62_set_field_value(packet_62 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_63_struct packet_63;
packet_63 * deserialize_63(Stream ** fromstream, unsigned short size);
unsigned short serialize_63(Stream ** tostream, packet_63 * toserialize);
packet_63 * create_63();
void destroy_63(packet_63 * todestroy);
void printpacket_63(packet_63 * toprint);
unsigned int packet_63_id_of_field(packet_63 * onpacket, char * name);
VARIANT * packet_63_get_field_value(packet_63 * onpacket, unsigned int id);
int packet_63_set_field_value(packet_63 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_64_struct packet_64;
packet_64 * deserialize_64(Stream ** fromstream, unsigned short size);
unsigned short serialize_64(Stream ** tostream, packet_64 * toserialize);
packet_64 * create_64();
void destroy_64(packet_64 * todestroy);
void printpacket_64(packet_64 * toprint);
unsigned int packet_64_id_of_field(packet_64 * onpacket, char * name);
VARIANT * packet_64_get_field_value(packet_64 * onpacket, unsigned int id);
int packet_64_set_field_value(packet_64 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_65_struct packet_65;
packet_65 * deserialize_65(Stream ** fromstream, unsigned short size);
unsigned short serialize_65(Stream ** tostream, packet_65 * toserialize);
packet_65 * create_65();
void destroy_65(packet_65 * todestroy);
void printpacket_65(packet_65 * toprint);
unsigned int packet_65_id_of_field(packet_65 * onpacket, char * name);
VARIANT * packet_65_get_field_value(packet_65 * onpacket, unsigned int id);
int packet_65_set_field_value(packet_65 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_66_struct packet_66;
packet_66 * deserialize_66(Stream ** fromstream, unsigned short size);
unsigned short serialize_66(Stream ** tostream, packet_66 * toserialize);
packet_66 * create_66();
void destroy_66(packet_66 * todestroy);
void printpacket_66(packet_66 * toprint);
unsigned int packet_66_id_of_field(packet_66 * onpacket, char * name);
VARIANT * packet_66_get_field_value(packet_66 * onpacket, unsigned int id);
int packet_66_set_field_value(packet_66 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_67_struct packet_67;
packet_67 * deserialize_67(Stream ** fromstream, unsigned short size);
unsigned short serialize_67(Stream ** tostream, packet_67 * toserialize);
packet_67 * create_67();
void destroy_67(packet_67 * todestroy);
void printpacket_67(packet_67 * toprint);
unsigned int packet_67_id_of_field(packet_67 * onpacket, char * name);
VARIANT * packet_67_get_field_value(packet_67 * onpacket, unsigned int id);
int packet_67_set_field_value(packet_67 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_68_struct packet_68;
packet_68 * deserialize_68(Stream ** fromstream, unsigned short size);
unsigned short serialize_68(Stream ** tostream, packet_68 * toserialize);
packet_68 * create_68();
void destroy_68(packet_68 * todestroy);
void printpacket_68(packet_68 * toprint);
unsigned int packet_68_id_of_field(packet_68 * onpacket, char * name);
VARIANT * packet_68_get_field_value(packet_68 * onpacket, unsigned int id);
int packet_68_set_field_value(packet_68 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_69_struct packet_69;
packet_69 * deserialize_69(Stream ** fromstream, unsigned short size);
unsigned short serialize_69(Stream ** tostream, packet_69 * toserialize);
packet_69 * create_69();
void destroy_69(packet_69 * todestroy);
void printpacket_69(packet_69 * toprint);
unsigned int packet_69_id_of_field(packet_69 * onpacket, char * name);
VARIANT * packet_69_get_field_value(packet_69 * onpacket, unsigned int id);
int packet_69_set_field_value(packet_69 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_6a_struct packet_6a;
packet_6a * deserialize_6a(Stream ** fromstream, unsigned short size);
unsigned short serialize_6a(Stream ** tostream, packet_6a * toserialize);
packet_6a * create_6a();
void destroy_6a(packet_6a * todestroy);
void printpacket_6a(packet_6a * toprint);
unsigned int packet_6a_id_of_field(packet_6a * onpacket, char * name);
VARIANT * packet_6a_get_field_value(packet_6a * onpacket, unsigned int id);
int packet_6a_set_field_value(packet_6a * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_6b_struct packet_6b;
packet_6b * deserialize_6b(Stream ** fromstream, unsigned short size);
unsigned short serialize_6b(Stream ** tostream, packet_6b * toserialize);
packet_6b * create_6b();
void destroy_6b(packet_6b * todestroy);
void printpacket_6b(packet_6b * toprint);
unsigned int packet_6b_id_of_field(packet_6b * onpacket, char * name);
VARIANT * packet_6b_get_field_value(packet_6b * onpacket, unsigned int id);
int packet_6b_set_field_value(packet_6b * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_6c_struct packet_6c;
packet_6c * deserialize_6c(Stream ** fromstream, unsigned short size);
unsigned short serialize_6c(Stream ** tostream, packet_6c * toserialize);
packet_6c * create_6c();
void destroy_6c(packet_6c * todestroy);
void printpacket_6c(packet_6c * toprint);
unsigned int packet_6c_id_of_field(packet_6c * onpacket, char * name);
VARIANT * packet_6c_get_field_value(packet_6c * onpacket, unsigned int id);
int packet_6c_set_field_value(packet_6c * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_6d_struct packet_6d;
packet_6d * deserialize_6d(Stream ** fromstream, unsigned short size);
unsigned short serialize_6d(Stream ** tostream, packet_6d * toserialize);
packet_6d * create_6d();
void destroy_6d(packet_6d * todestroy);
void printpacket_6d(packet_6d * toprint);
unsigned int packet_6d_id_of_field(packet_6d * onpacket, char * name);
VARIANT * packet_6d_get_field_value(packet_6d * onpacket, unsigned int id);
int packet_6d_set_field_value(packet_6d * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_6e_struct packet_6e;
packet_6e * deserialize_6e(Stream ** fromstream, unsigned short size);
unsigned short serialize_6e(Stream ** tostream, packet_6e * toserialize);
packet_6e * create_6e();
void destroy_6e(packet_6e * todestroy);
void printpacket_6e(packet_6e * toprint);
unsigned int packet_6e_id_of_field(packet_6e * onpacket, char * name);
VARIANT * packet_6e_get_field_value(packet_6e * onpacket, unsigned int id);
int packet_6e_set_field_value(packet_6e * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_6f_struct packet_6f;
packet_6f * deserialize_6f(Stream ** fromstream, unsigned short size);
unsigned short serialize_6f(Stream ** tostream, packet_6f * toserialize);
packet_6f * create_6f();
void destroy_6f(packet_6f * todestroy);
void printpacket_6f(packet_6f * toprint);
unsigned int packet_6f_id_of_field(packet_6f * onpacket, char * name);
VARIANT * packet_6f_get_field_value(packet_6f * onpacket, unsigned int id);
int packet_6f_set_field_value(packet_6f * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_70_struct packet_70;
packet_70 * deserialize_70(Stream ** fromstream, unsigned short size);
unsigned short serialize_70(Stream ** tostream, packet_70 * toserialize);
packet_70 * create_70();
void destroy_70(packet_70 * todestroy);
void printpacket_70(packet_70 * toprint);
unsigned int packet_70_id_of_field(packet_70 * onpacket, char * name);
VARIANT * packet_70_get_field_value(packet_70 * onpacket, unsigned int id);
int packet_70_set_field_value(packet_70 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_71_struct packet_71;
packet_71 * deserialize_71(Stream ** fromstream, unsigned short size);
unsigned short serialize_71(Stream ** tostream, packet_71 * toserialize);
packet_71 * create_71();
void destroy_71(packet_71 * todestroy);
void printpacket_71(packet_71 * toprint);
unsigned int packet_71_id_of_field(packet_71 * onpacket, char * name);
VARIANT * packet_71_get_field_value(packet_71 * onpacket, unsigned int id);
int packet_71_set_field_value(packet_71 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_72_struct packet_72;
packet_72 * deserialize_72(Stream ** fromstream, unsigned short size);
unsigned short serialize_72(Stream ** tostream, packet_72 * toserialize);
packet_72 * create_72();
void destroy_72(packet_72 * todestroy);
void printpacket_72(packet_72 * toprint);
unsigned int packet_72_id_of_field(packet_72 * onpacket, char * name);
VARIANT * packet_72_get_field_value(packet_72 * onpacket, unsigned int id);
int packet_72_set_field_value(packet_72 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_73_struct packet_73;
packet_73 * deserialize_73(Stream ** fromstream, unsigned short size);
unsigned short serialize_73(Stream ** tostream, packet_73 * toserialize);
packet_73 * create_73();
void destroy_73(packet_73 * todestroy);
void printpacket_73(packet_73 * toprint);
unsigned int packet_73_id_of_field(packet_73 * onpacket, char * name);
VARIANT * packet_73_get_field_value(packet_73 * onpacket, unsigned int id);
int packet_73_set_field_value(packet_73 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_74_struct packet_74;
packet_74 * deserialize_74(Stream ** fromstream, unsigned short size);
unsigned short serialize_74(Stream ** tostream, packet_74 * toserialize);
packet_74 * create_74();
void destroy_74(packet_74 * todestroy);
void printpacket_74(packet_74 * toprint);
unsigned int packet_74_id_of_field(packet_74 * onpacket, char * name);
VARIANT * packet_74_get_field_value(packet_74 * onpacket, unsigned int id);
int packet_74_set_field_value(packet_74 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_75_struct packet_75;
packet_75 * deserialize_75(Stream ** fromstream, unsigned short size);
unsigned short serialize_75(Stream ** tostream, packet_75 * toserialize);
packet_75 * create_75();
void destroy_75(packet_75 * todestroy);
void printpacket_75(packet_75 * toprint);
unsigned int packet_75_id_of_field(packet_75 * onpacket, char * name);
VARIANT * packet_75_get_field_value(packet_75 * onpacket, unsigned int id);
int packet_75_set_field_value(packet_75 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_76_struct packet_76;
packet_76 * deserialize_76(Stream ** fromstream, unsigned short size);
unsigned short serialize_76(Stream ** tostream, packet_76 * toserialize);
packet_76 * create_76();
void destroy_76(packet_76 * todestroy);
void printpacket_76(packet_76 * toprint);
unsigned int packet_76_id_of_field(packet_76 * onpacket, char * name);
VARIANT * packet_76_get_field_value(packet_76 * onpacket, unsigned int id);
int packet_76_set_field_value(packet_76 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_77_struct packet_77;
packet_77 * deserialize_77(Stream ** fromstream, unsigned short size);
unsigned short serialize_77(Stream ** tostream, packet_77 * toserialize);
packet_77 * create_77();
void destroy_77(packet_77 * todestroy);
void printpacket_77(packet_77 * toprint);
unsigned int packet_77_id_of_field(packet_77 * onpacket, char * name);
VARIANT * packet_77_get_field_value(packet_77 * onpacket, unsigned int id);
int packet_77_set_field_value(packet_77 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_78_struct packet_78;
packet_78 * deserialize_78(Stream ** fromstream, unsigned short size);
unsigned short serialize_78(Stream ** tostream, packet_78 * toserialize);
packet_78 * create_78();
void destroy_78(packet_78 * todestroy);
void printpacket_78(packet_78 * toprint);
unsigned int packet_78_id_of_field(packet_78 * onpacket, char * name);
VARIANT * packet_78_get_field_value(packet_78 * onpacket, unsigned int id);
int packet_78_set_field_value(packet_78 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_79_struct packet_79;
packet_79 * deserialize_79(Stream ** fromstream, unsigned short size);
unsigned short serialize_79(Stream ** tostream, packet_79 * toserialize);
packet_79 * create_79();
void destroy_79(packet_79 * todestroy);
void printpacket_79(packet_79 * toprint);
unsigned int packet_79_id_of_field(packet_79 * onpacket, char * name);
VARIANT * packet_79_get_field_value(packet_79 * onpacket, unsigned int id);
int packet_79_set_field_value(packet_79 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_7a_struct packet_7a;
packet_7a * deserialize_7a(Stream ** fromstream, unsigned short size);
unsigned short serialize_7a(Stream ** tostream, packet_7a * toserialize);
packet_7a * create_7a();
void destroy_7a(packet_7a * todestroy);
void printpacket_7a(packet_7a * toprint);
unsigned int packet_7a_id_of_field(packet_7a * onpacket, char * name);
VARIANT * packet_7a_get_field_value(packet_7a * onpacket, unsigned int id);
int packet_7a_set_field_value(packet_7a * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_7b_struct packet_7b;
packet_7b * deserialize_7b(Stream ** fromstream, unsigned short size);
unsigned short serialize_7b(Stream ** tostream, packet_7b * toserialize);
packet_7b * create_7b();
void destroy_7b(packet_7b * todestroy);
void printpacket_7b(packet_7b * toprint);
unsigned int packet_7b_id_of_field(packet_7b * onpacket, char * name);
VARIANT * packet_7b_get_field_value(packet_7b * onpacket, unsigned int id);
int packet_7b_set_field_value(packet_7b * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_7c_struct packet_7c;
packet_7c * deserialize_7c(Stream ** fromstream, unsigned short size);
unsigned short serialize_7c(Stream ** tostream, packet_7c * toserialize);
packet_7c * create_7c();
void destroy_7c(packet_7c * todestroy);
void printpacket_7c(packet_7c * toprint);
unsigned int packet_7c_id_of_field(packet_7c * onpacket, char * name);
VARIANT * packet_7c_get_field_value(packet_7c * onpacket, unsigned int id);
int packet_7c_set_field_value(packet_7c * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_7d_struct packet_7d;
packet_7d * deserialize_7d(Stream ** fromstream, unsigned short size);
unsigned short serialize_7d(Stream ** tostream, packet_7d * toserialize);
packet_7d * create_7d();
void destroy_7d(packet_7d * todestroy);
void printpacket_7d(packet_7d * toprint);
unsigned int packet_7d_id_of_field(packet_7d * onpacket, char * name);
VARIANT * packet_7d_get_field_value(packet_7d * onpacket, unsigned int id);
int packet_7d_set_field_value(packet_7d * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_7e_struct packet_7e;
packet_7e * deserialize_7e(Stream ** fromstream, unsigned short size);
unsigned short serialize_7e(Stream ** tostream, packet_7e * toserialize);
packet_7e * create_7e();
void destroy_7e(packet_7e * todestroy);
void printpacket_7e(packet_7e * toprint);
unsigned int packet_7e_id_of_field(packet_7e * onpacket, char * name);
VARIANT * packet_7e_get_field_value(packet_7e * onpacket, unsigned int id);
int packet_7e_set_field_value(packet_7e * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_7f_struct packet_7f;
packet_7f * deserialize_7f(Stream ** fromstream, unsigned short size);
unsigned short serialize_7f(Stream ** tostream, packet_7f * toserialize);
packet_7f * create_7f();
void destroy_7f(packet_7f * todestroy);
void printpacket_7f(packet_7f * toprint);
unsigned int packet_7f_id_of_field(packet_7f * onpacket, char * name);
VARIANT * packet_7f_get_field_value(packet_7f * onpacket, unsigned int id);
int packet_7f_set_field_value(packet_7f * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_80_struct packet_80;
packet_80 * deserialize_80(Stream ** fromstream, unsigned short size);
unsigned short serialize_80(Stream ** tostream, packet_80 * toserialize);
packet_80 * create_80();
void destroy_80(packet_80 * todestroy);
void printpacket_80(packet_80 * toprint);
unsigned int packet_80_id_of_field(packet_80 * onpacket, char * name);
VARIANT * packet_80_get_field_value(packet_80 * onpacket, unsigned int id);
int packet_80_set_field_value(packet_80 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_81_struct packet_81;
packet_81 * deserialize_81(Stream ** fromstream, unsigned short size);
unsigned short serialize_81(Stream ** tostream, packet_81 * toserialize);
packet_81 * create_81();
void destroy_81(packet_81 * todestroy);
void printpacket_81(packet_81 * toprint);
unsigned int packet_81_id_of_field(packet_81 * onpacket, char * name);
VARIANT * packet_81_get_field_value(packet_81 * onpacket, unsigned int id);
int packet_81_set_field_value(packet_81 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_82_struct packet_82;
packet_82 * deserialize_82(Stream ** fromstream, unsigned short size);
unsigned short serialize_82(Stream ** tostream, packet_82 * toserialize);
packet_82 * create_82();
void destroy_82(packet_82 * todestroy);
void printpacket_82(packet_82 * toprint);
unsigned int packet_82_id_of_field(packet_82 * onpacket, char * name);
VARIANT * packet_82_get_field_value(packet_82 * onpacket, unsigned int id);
int packet_82_set_field_value(packet_82 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_83_struct packet_83;
packet_83 * deserialize_83(Stream ** fromstream, unsigned short size);
unsigned short serialize_83(Stream ** tostream, packet_83 * toserialize);
packet_83 * create_83();
void destroy_83(packet_83 * todestroy);
void printpacket_83(packet_83 * toprint);
unsigned int packet_83_id_of_field(packet_83 * onpacket, char * name);
VARIANT * packet_83_get_field_value(packet_83 * onpacket, unsigned int id);
int packet_83_set_field_value(packet_83 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_84_struct packet_84;
packet_84 * deserialize_84(Stream ** fromstream, unsigned short size);
unsigned short serialize_84(Stream ** tostream, packet_84 * toserialize);
packet_84 * create_84();
void destroy_84(packet_84 * todestroy);
void printpacket_84(packet_84 * toprint);
unsigned int packet_84_id_of_field(packet_84 * onpacket, char * name);
VARIANT * packet_84_get_field_value(packet_84 * onpacket, unsigned int id);
int packet_84_set_field_value(packet_84 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_85_struct packet_85;
packet_85 * deserialize_85(Stream ** fromstream, unsigned short size);
unsigned short serialize_85(Stream ** tostream, packet_85 * toserialize);
packet_85 * create_85();
void destroy_85(packet_85 * todestroy);
void printpacket_85(packet_85 * toprint);
unsigned int packet_85_id_of_field(packet_85 * onpacket, char * name);
VARIANT * packet_85_get_field_value(packet_85 * onpacket, unsigned int id);
int packet_85_set_field_value(packet_85 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_86_struct packet_86;
packet_86 * deserialize_86(Stream ** fromstream, unsigned short size);
unsigned short serialize_86(Stream ** tostream, packet_86 * toserialize);
packet_86 * create_86();
void destroy_86(packet_86 * todestroy);
void printpacket_86(packet_86 * toprint);
unsigned int packet_86_id_of_field(packet_86 * onpacket, char * name);
VARIANT * packet_86_get_field_value(packet_86 * onpacket, unsigned int id);
int packet_86_set_field_value(packet_86 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_87_struct packet_87;
packet_87 * deserialize_87(Stream ** fromstream, unsigned short size);
unsigned short serialize_87(Stream ** tostream, packet_87 * toserialize);
packet_87 * create_87();
void destroy_87(packet_87 * todestroy);
void printpacket_87(packet_87 * toprint);
unsigned int packet_87_id_of_field(packet_87 * onpacket, char * name);
VARIANT * packet_87_get_field_value(packet_87 * onpacket, unsigned int id);
int packet_87_set_field_value(packet_87 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_88_struct packet_88;
packet_88 * deserialize_88(Stream ** fromstream, unsigned short size);
unsigned short serialize_88(Stream ** tostream, packet_88 * toserialize);
packet_88 * create_88();
void destroy_88(packet_88 * todestroy);
void printpacket_88(packet_88 * toprint);
unsigned int packet_88_id_of_field(packet_88 * onpacket, char * name);
VARIANT * packet_88_get_field_value(packet_88 * onpacket, unsigned int id);
int packet_88_set_field_value(packet_88 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_89_struct packet_89;
packet_89 * deserialize_89(Stream ** fromstream, unsigned short size);
unsigned short serialize_89(Stream ** tostream, packet_89 * toserialize);
packet_89 * create_89();
void destroy_89(packet_89 * todestroy);
void printpacket_89(packet_89 * toprint);
unsigned int packet_89_id_of_field(packet_89 * onpacket, char * name);
VARIANT * packet_89_get_field_value(packet_89 * onpacket, unsigned int id);
int packet_89_set_field_value(packet_89 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_8a_struct packet_8a;
packet_8a * deserialize_8a(Stream ** fromstream, unsigned short size);
unsigned short serialize_8a(Stream ** tostream, packet_8a * toserialize);
packet_8a * create_8a();
void destroy_8a(packet_8a * todestroy);
void printpacket_8a(packet_8a * toprint);
unsigned int packet_8a_id_of_field(packet_8a * onpacket, char * name);
VARIANT * packet_8a_get_field_value(packet_8a * onpacket, unsigned int id);
int packet_8a_set_field_value(packet_8a * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_8b_struct packet_8b;
packet_8b * deserialize_8b(Stream ** fromstream, unsigned short size);
unsigned short serialize_8b(Stream ** tostream, packet_8b * toserialize);
packet_8b * create_8b();
void destroy_8b(packet_8b * todestroy);
void printpacket_8b(packet_8b * toprint);
unsigned int packet_8b_id_of_field(packet_8b * onpacket, char * name);
VARIANT * packet_8b_get_field_value(packet_8b * onpacket, unsigned int id);
int packet_8b_set_field_value(packet_8b * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_8c_struct packet_8c;
packet_8c * deserialize_8c(Stream ** fromstream, unsigned short size);
unsigned short serialize_8c(Stream ** tostream, packet_8c * toserialize);
packet_8c * create_8c();
void destroy_8c(packet_8c * todestroy);
void printpacket_8c(packet_8c * toprint);
unsigned int packet_8c_id_of_field(packet_8c * onpacket, char * name);
VARIANT * packet_8c_get_field_value(packet_8c * onpacket, unsigned int id);
int packet_8c_set_field_value(packet_8c * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_8d_struct packet_8d;
packet_8d * deserialize_8d(Stream ** fromstream, unsigned short size);
unsigned short serialize_8d(Stream ** tostream, packet_8d * toserialize);
packet_8d * create_8d();
void destroy_8d(packet_8d * todestroy);
void printpacket_8d(packet_8d * toprint);
unsigned int packet_8d_id_of_field(packet_8d * onpacket, char * name);
VARIANT * packet_8d_get_field_value(packet_8d * onpacket, unsigned int id);
int packet_8d_set_field_value(packet_8d * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_8e_struct packet_8e;
packet_8e * deserialize_8e(Stream ** fromstream, unsigned short size);
unsigned short serialize_8e(Stream ** tostream, packet_8e * toserialize);
packet_8e * create_8e();
void destroy_8e(packet_8e * todestroy);
void printpacket_8e(packet_8e * toprint);
unsigned int packet_8e_id_of_field(packet_8e * onpacket, char * name);
VARIANT * packet_8e_get_field_value(packet_8e * onpacket, unsigned int id);
int packet_8e_set_field_value(packet_8e * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_8f_struct packet_8f;
packet_8f * deserialize_8f(Stream ** fromstream, unsigned short size);
unsigned short serialize_8f(Stream ** tostream, packet_8f * toserialize);
packet_8f * create_8f();
void destroy_8f(packet_8f * todestroy);
void printpacket_8f(packet_8f * toprint);
unsigned int packet_8f_id_of_field(packet_8f * onpacket, char * name);
VARIANT * packet_8f_get_field_value(packet_8f * onpacket, unsigned int id);
int packet_8f_set_field_value(packet_8f * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_90_struct packet_90;
packet_90 * deserialize_90(Stream ** fromstream, unsigned short size);
unsigned short serialize_90(Stream ** tostream, packet_90 * toserialize);
packet_90 * create_90();
void destroy_90(packet_90 * todestroy);
void printpacket_90(packet_90 * toprint);
unsigned int packet_90_id_of_field(packet_90 * onpacket, char * name);
VARIANT * packet_90_get_field_value(packet_90 * onpacket, unsigned int id);
int packet_90_set_field_value(packet_90 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_91_struct packet_91;
packet_91 * deserialize_91(Stream ** fromstream, unsigned short size);
unsigned short serialize_91(Stream ** tostream, packet_91 * toserialize);
packet_91 * create_91();
void destroy_91(packet_91 * todestroy);
void printpacket_91(packet_91 * toprint);
unsigned int packet_91_id_of_field(packet_91 * onpacket, char * name);
VARIANT * packet_91_get_field_value(packet_91 * onpacket, unsigned int id);
int packet_91_set_field_value(packet_91 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_92_struct packet_92;
packet_92 * deserialize_92(Stream ** fromstream, unsigned short size);
unsigned short serialize_92(Stream ** tostream, packet_92 * toserialize);
packet_92 * create_92();
void destroy_92(packet_92 * todestroy);
void printpacket_92(packet_92 * toprint);
unsigned int packet_92_id_of_field(packet_92 * onpacket, char * name);
VARIANT * packet_92_get_field_value(packet_92 * onpacket, unsigned int id);
int packet_92_set_field_value(packet_92 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_93_struct packet_93;
packet_93 * deserialize_93(Stream ** fromstream, unsigned short size);
unsigned short serialize_93(Stream ** tostream, packet_93 * toserialize);
packet_93 * create_93();
void destroy_93(packet_93 * todestroy);
void printpacket_93(packet_93 * toprint);
unsigned int packet_93_id_of_field(packet_93 * onpacket, char * name);
VARIANT * packet_93_get_field_value(packet_93 * onpacket, unsigned int id);
int packet_93_set_field_value(packet_93 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_94_struct packet_94;
packet_94 * deserialize_94(Stream ** fromstream, unsigned short size);
unsigned short serialize_94(Stream ** tostream, packet_94 * toserialize);
packet_94 * create_94();
void destroy_94(packet_94 * todestroy);
void printpacket_94(packet_94 * toprint);
unsigned int packet_94_id_of_field(packet_94 * onpacket, char * name);
VARIANT * packet_94_get_field_value(packet_94 * onpacket, unsigned int id);
int packet_94_set_field_value(packet_94 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_95_struct packet_95;
packet_95 * deserialize_95(Stream ** fromstream, unsigned short size);
unsigned short serialize_95(Stream ** tostream, packet_95 * toserialize);
packet_95 * create_95();
void destroy_95(packet_95 * todestroy);
void printpacket_95(packet_95 * toprint);
unsigned int packet_95_id_of_field(packet_95 * onpacket, char * name);
VARIANT * packet_95_get_field_value(packet_95 * onpacket, unsigned int id);
int packet_95_set_field_value(packet_95 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_96_struct packet_96;
packet_96 * deserialize_96(Stream ** fromstream, unsigned short size);
unsigned short serialize_96(Stream ** tostream, packet_96 * toserialize);
packet_96 * create_96();
void destroy_96(packet_96 * todestroy);
void printpacket_96(packet_96 * toprint);
unsigned int packet_96_id_of_field(packet_96 * onpacket, char * name);
VARIANT * packet_96_get_field_value(packet_96 * onpacket, unsigned int id);
int packet_96_set_field_value(packet_96 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_97_struct packet_97;
packet_97 * deserialize_97(Stream ** fromstream, unsigned short size);
unsigned short serialize_97(Stream ** tostream, packet_97 * toserialize);
packet_97 * create_97();
void destroy_97(packet_97 * todestroy);
void printpacket_97(packet_97 * toprint);
unsigned int packet_97_id_of_field(packet_97 * onpacket, char * name);
VARIANT * packet_97_get_field_value(packet_97 * onpacket, unsigned int id);
int packet_97_set_field_value(packet_97 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_98_struct packet_98;
packet_98 * deserialize_98(Stream ** fromstream, unsigned short size);
unsigned short serialize_98(Stream ** tostream, packet_98 * toserialize);
packet_98 * create_98();
void destroy_98(packet_98 * todestroy);
void printpacket_98(packet_98 * toprint);
unsigned int packet_98_id_of_field(packet_98 * onpacket, char * name);
VARIANT * packet_98_get_field_value(packet_98 * onpacket, unsigned int id);
int packet_98_set_field_value(packet_98 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_99_struct packet_99;
packet_99 * deserialize_99(Stream ** fromstream, unsigned short size);
unsigned short serialize_99(Stream ** tostream, packet_99 * toserialize);
packet_99 * create_99();
void destroy_99(packet_99 * todestroy);
void printpacket_99(packet_99 * toprint);
unsigned int packet_99_id_of_field(packet_99 * onpacket, char * name);
VARIANT * packet_99_get_field_value(packet_99 * onpacket, unsigned int id);
int packet_99_set_field_value(packet_99 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_9a_struct packet_9a;
packet_9a * deserialize_9a(Stream ** fromstream, unsigned short size);
unsigned short serialize_9a(Stream ** tostream, packet_9a * toserialize);
packet_9a * create_9a();
void destroy_9a(packet_9a * todestroy);
void printpacket_9a(packet_9a * toprint);
unsigned int packet_9a_id_of_field(packet_9a * onpacket, char * name);
VARIANT * packet_9a_get_field_value(packet_9a * onpacket, unsigned int id);
int packet_9a_set_field_value(packet_9a * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_9b_struct packet_9b;
packet_9b * deserialize_9b(Stream ** fromstream, unsigned short size);
unsigned short serialize_9b(Stream ** tostream, packet_9b * toserialize);
packet_9b * create_9b();
void destroy_9b(packet_9b * todestroy);
void printpacket_9b(packet_9b * toprint);
unsigned int packet_9b_id_of_field(packet_9b * onpacket, char * name);
VARIANT * packet_9b_get_field_value(packet_9b * onpacket, unsigned int id);
int packet_9b_set_field_value(packet_9b * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_9c_struct packet_9c;
packet_9c * deserialize_9c(Stream ** fromstream, unsigned short size);
unsigned short serialize_9c(Stream ** tostream, packet_9c * toserialize);
packet_9c * create_9c();
void destroy_9c(packet_9c * todestroy);
void printpacket_9c(packet_9c * toprint);
unsigned int packet_9c_id_of_field(packet_9c * onpacket, char * name);
VARIANT * packet_9c_get_field_value(packet_9c * onpacket, unsigned int id);
int packet_9c_set_field_value(packet_9c * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_9d_struct packet_9d;
packet_9d * deserialize_9d(Stream ** fromstream, unsigned short size);
unsigned short serialize_9d(Stream ** tostream, packet_9d * toserialize);
packet_9d * create_9d();
void destroy_9d(packet_9d * todestroy);
void printpacket_9d(packet_9d * toprint);
unsigned int packet_9d_id_of_field(packet_9d * onpacket, char * name);
VARIANT * packet_9d_get_field_value(packet_9d * onpacket, unsigned int id);
int packet_9d_set_field_value(packet_9d * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_9e_struct packet_9e;
packet_9e * deserialize_9e(Stream ** fromstream, unsigned short size);
unsigned short serialize_9e(Stream ** tostream, packet_9e * toserialize);
packet_9e * create_9e();
void destroy_9e(packet_9e * todestroy);
void printpacket_9e(packet_9e * toprint);
unsigned int packet_9e_id_of_field(packet_9e * onpacket, char * name);
VARIANT * packet_9e_get_field_value(packet_9e * onpacket, unsigned int id);
int packet_9e_set_field_value(packet_9e * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_9f_struct packet_9f;
packet_9f * deserialize_9f(Stream ** fromstream, unsigned short size);
unsigned short serialize_9f(Stream ** tostream, packet_9f * toserialize);
packet_9f * create_9f();
void destroy_9f(packet_9f * todestroy);
void printpacket_9f(packet_9f * toprint);
unsigned int packet_9f_id_of_field(packet_9f * onpacket, char * name);
VARIANT * packet_9f_get_field_value(packet_9f * onpacket, unsigned int id);
int packet_9f_set_field_value(packet_9f * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a0_struct packet_a0;
packet_a0 * deserialize_a0(Stream ** fromstream, unsigned short size);
unsigned short serialize_a0(Stream ** tostream, packet_a0 * toserialize);
packet_a0 * create_a0();
void destroy_a0(packet_a0 * todestroy);
void printpacket_a0(packet_a0 * toprint);
unsigned int packet_a0_id_of_field(packet_a0 * onpacket, char * name);
VARIANT * packet_a0_get_field_value(packet_a0 * onpacket, unsigned int id);
int packet_a0_set_field_value(packet_a0 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a1_struct packet_a1;
packet_a1 * deserialize_a1(Stream ** fromstream, unsigned short size);
unsigned short serialize_a1(Stream ** tostream, packet_a1 * toserialize);
packet_a1 * create_a1();
void destroy_a1(packet_a1 * todestroy);
void printpacket_a1(packet_a1 * toprint);
unsigned int packet_a1_id_of_field(packet_a1 * onpacket, char * name);
VARIANT * packet_a1_get_field_value(packet_a1 * onpacket, unsigned int id);
int packet_a1_set_field_value(packet_a1 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a2_struct packet_a2;
packet_a2 * deserialize_a2(Stream ** fromstream, unsigned short size);
unsigned short serialize_a2(Stream ** tostream, packet_a2 * toserialize);
packet_a2 * create_a2();
void destroy_a2(packet_a2 * todestroy);
void printpacket_a2(packet_a2 * toprint);
unsigned int packet_a2_id_of_field(packet_a2 * onpacket, char * name);
VARIANT * packet_a2_get_field_value(packet_a2 * onpacket, unsigned int id);
int packet_a2_set_field_value(packet_a2 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a3_struct packet_a3;
packet_a3 * deserialize_a3(Stream ** fromstream, unsigned short size);
unsigned short serialize_a3(Stream ** tostream, packet_a3 * toserialize);
packet_a3 * create_a3();
void destroy_a3(packet_a3 * todestroy);
void printpacket_a3(packet_a3 * toprint);
unsigned int packet_a3_id_of_field(packet_a3 * onpacket, char * name);
VARIANT * packet_a3_get_field_value(packet_a3 * onpacket, unsigned int id);
int packet_a3_set_field_value(packet_a3 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a4_struct packet_a4;
packet_a4 * deserialize_a4(Stream ** fromstream, unsigned short size);
unsigned short serialize_a4(Stream ** tostream, packet_a4 * toserialize);
packet_a4 * create_a4();
void destroy_a4(packet_a4 * todestroy);
void printpacket_a4(packet_a4 * toprint);
unsigned int packet_a4_id_of_field(packet_a4 * onpacket, char * name);
VARIANT * packet_a4_get_field_value(packet_a4 * onpacket, unsigned int id);
int packet_a4_set_field_value(packet_a4 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a5_struct packet_a5;
packet_a5 * deserialize_a5(Stream ** fromstream, unsigned short size);
unsigned short serialize_a5(Stream ** tostream, packet_a5 * toserialize);
packet_a5 * create_a5();
void destroy_a5(packet_a5 * todestroy);
void printpacket_a5(packet_a5 * toprint);
unsigned int packet_a5_id_of_field(packet_a5 * onpacket, char * name);
VARIANT * packet_a5_get_field_value(packet_a5 * onpacket, unsigned int id);
int packet_a5_set_field_value(packet_a5 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a6_struct packet_a6;
packet_a6 * deserialize_a6(Stream ** fromstream, unsigned short size);
unsigned short serialize_a6(Stream ** tostream, packet_a6 * toserialize);
packet_a6 * create_a6();
void destroy_a6(packet_a6 * todestroy);
void printpacket_a6(packet_a6 * toprint);
unsigned int packet_a6_id_of_field(packet_a6 * onpacket, char * name);
VARIANT * packet_a6_get_field_value(packet_a6 * onpacket, unsigned int id);
int packet_a6_set_field_value(packet_a6 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a7_struct packet_a7;
packet_a7 * deserialize_a7(Stream ** fromstream, unsigned short size);
unsigned short serialize_a7(Stream ** tostream, packet_a7 * toserialize);
packet_a7 * create_a7();
void destroy_a7(packet_a7 * todestroy);
void printpacket_a7(packet_a7 * toprint);
unsigned int packet_a7_id_of_field(packet_a7 * onpacket, char * name);
VARIANT * packet_a7_get_field_value(packet_a7 * onpacket, unsigned int id);
int packet_a7_set_field_value(packet_a7 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a8_struct packet_a8;
packet_a8 * deserialize_a8(Stream ** fromstream, unsigned short size);
unsigned short serialize_a8(Stream ** tostream, packet_a8 * toserialize);
packet_a8 * create_a8();
void destroy_a8(packet_a8 * todestroy);
void printpacket_a8(packet_a8 * toprint);
unsigned int packet_a8_id_of_field(packet_a8 * onpacket, char * name);
VARIANT * packet_a8_get_field_value(packet_a8 * onpacket, unsigned int id);
int packet_a8_set_field_value(packet_a8 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_a9_struct packet_a9;
packet_a9 * deserialize_a9(Stream ** fromstream, unsigned short size);
unsigned short serialize_a9(Stream ** tostream, packet_a9 * toserialize);
packet_a9 * create_a9();
void destroy_a9(packet_a9 * todestroy);
void printpacket_a9(packet_a9 * toprint);
unsigned int packet_a9_id_of_field(packet_a9 * onpacket, char * name);
VARIANT * packet_a9_get_field_value(packet_a9 * onpacket, unsigned int id);
int packet_a9_set_field_value(packet_a9 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_aa_struct packet_aa;
packet_aa * deserialize_aa(Stream ** fromstream, unsigned short size);
unsigned short serialize_aa(Stream ** tostream, packet_aa * toserialize);
packet_aa * create_aa();
void destroy_aa(packet_aa * todestroy);
void printpacket_aa(packet_aa * toprint);
unsigned int packet_aa_id_of_field(packet_aa * onpacket, char * name);
VARIANT * packet_aa_get_field_value(packet_aa * onpacket, unsigned int id);
int packet_aa_set_field_value(packet_aa * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ab_struct packet_ab;
packet_ab * deserialize_ab(Stream ** fromstream, unsigned short size);
unsigned short serialize_ab(Stream ** tostream, packet_ab * toserialize);
packet_ab * create_ab();
void destroy_ab(packet_ab * todestroy);
void printpacket_ab(packet_ab * toprint);
unsigned int packet_ab_id_of_field(packet_ab * onpacket, char * name);
VARIANT * packet_ab_get_field_value(packet_ab * onpacket, unsigned int id);
int packet_ab_set_field_value(packet_ab * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ac_struct packet_ac;
packet_ac * deserialize_ac(Stream ** fromstream, unsigned short size);
unsigned short serialize_ac(Stream ** tostream, packet_ac * toserialize);
packet_ac * create_ac();
void destroy_ac(packet_ac * todestroy);
void printpacket_ac(packet_ac * toprint);
unsigned int packet_ac_id_of_field(packet_ac * onpacket, char * name);
VARIANT * packet_ac_get_field_value(packet_ac * onpacket, unsigned int id);
int packet_ac_set_field_value(packet_ac * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ad_struct packet_ad;
packet_ad * deserialize_ad(Stream ** fromstream, unsigned short size);
unsigned short serialize_ad(Stream ** tostream, packet_ad * toserialize);
packet_ad * create_ad();
void destroy_ad(packet_ad * todestroy);
void printpacket_ad(packet_ad * toprint);
unsigned int packet_ad_id_of_field(packet_ad * onpacket, char * name);
VARIANT * packet_ad_get_field_value(packet_ad * onpacket, unsigned int id);
int packet_ad_set_field_value(packet_ad * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ae_struct packet_ae;
packet_ae * deserialize_ae(Stream ** fromstream, unsigned short size);
unsigned short serialize_ae(Stream ** tostream, packet_ae * toserialize);
packet_ae * create_ae();
void destroy_ae(packet_ae * todestroy);
void printpacket_ae(packet_ae * toprint);
unsigned int packet_ae_id_of_field(packet_ae * onpacket, char * name);
VARIANT * packet_ae_get_field_value(packet_ae * onpacket, unsigned int id);
int packet_ae_set_field_value(packet_ae * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_af_struct packet_af;
packet_af * deserialize_af(Stream ** fromstream, unsigned short size);
unsigned short serialize_af(Stream ** tostream, packet_af * toserialize);
packet_af * create_af();
void destroy_af(packet_af * todestroy);
void printpacket_af(packet_af * toprint);
unsigned int packet_af_id_of_field(packet_af * onpacket, char * name);
VARIANT * packet_af_get_field_value(packet_af * onpacket, unsigned int id);
int packet_af_set_field_value(packet_af * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b0_struct packet_b0;
packet_b0 * deserialize_b0(Stream ** fromstream, unsigned short size);
unsigned short serialize_b0(Stream ** tostream, packet_b0 * toserialize);
packet_b0 * create_b0();
void destroy_b0(packet_b0 * todestroy);
void printpacket_b0(packet_b0 * toprint);
unsigned int packet_b0_id_of_field(packet_b0 * onpacket, char * name);
VARIANT * packet_b0_get_field_value(packet_b0 * onpacket, unsigned int id);
int packet_b0_set_field_value(packet_b0 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b1_struct packet_b1;
packet_b1 * deserialize_b1(Stream ** fromstream, unsigned short size);
unsigned short serialize_b1(Stream ** tostream, packet_b1 * toserialize);
packet_b1 * create_b1();
void destroy_b1(packet_b1 * todestroy);
void printpacket_b1(packet_b1 * toprint);
unsigned int packet_b1_id_of_field(packet_b1 * onpacket, char * name);
VARIANT * packet_b1_get_field_value(packet_b1 * onpacket, unsigned int id);
int packet_b1_set_field_value(packet_b1 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b2_struct packet_b2;
packet_b2 * deserialize_b2(Stream ** fromstream, unsigned short size);
unsigned short serialize_b2(Stream ** tostream, packet_b2 * toserialize);
packet_b2 * create_b2();
void destroy_b2(packet_b2 * todestroy);
void printpacket_b2(packet_b2 * toprint);
unsigned int packet_b2_id_of_field(packet_b2 * onpacket, char * name);
VARIANT * packet_b2_get_field_value(packet_b2 * onpacket, unsigned int id);
int packet_b2_set_field_value(packet_b2 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b3_struct packet_b3;
packet_b3 * deserialize_b3(Stream ** fromstream, unsigned short size);
unsigned short serialize_b3(Stream ** tostream, packet_b3 * toserialize);
packet_b3 * create_b3();
void destroy_b3(packet_b3 * todestroy);
void printpacket_b3(packet_b3 * toprint);
unsigned int packet_b3_id_of_field(packet_b3 * onpacket, char * name);
VARIANT * packet_b3_get_field_value(packet_b3 * onpacket, unsigned int id);
int packet_b3_set_field_value(packet_b3 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b4_struct packet_b4;
packet_b4 * deserialize_b4(Stream ** fromstream, unsigned short size);
unsigned short serialize_b4(Stream ** tostream, packet_b4 * toserialize);
packet_b4 * create_b4();
void destroy_b4(packet_b4 * todestroy);
void printpacket_b4(packet_b4 * toprint);
unsigned int packet_b4_id_of_field(packet_b4 * onpacket, char * name);
VARIANT * packet_b4_get_field_value(packet_b4 * onpacket, unsigned int id);
int packet_b4_set_field_value(packet_b4 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b5_struct packet_b5;
packet_b5 * deserialize_b5(Stream ** fromstream, unsigned short size);
unsigned short serialize_b5(Stream ** tostream, packet_b5 * toserialize);
packet_b5 * create_b5();
void destroy_b5(packet_b5 * todestroy);
void printpacket_b5(packet_b5 * toprint);
unsigned int packet_b5_id_of_field(packet_b5 * onpacket, char * name);
VARIANT * packet_b5_get_field_value(packet_b5 * onpacket, unsigned int id);
int packet_b5_set_field_value(packet_b5 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b6_struct packet_b6;
packet_b6 * deserialize_b6(Stream ** fromstream, unsigned short size);
unsigned short serialize_b6(Stream ** tostream, packet_b6 * toserialize);
packet_b6 * create_b6();
void destroy_b6(packet_b6 * todestroy);
void printpacket_b6(packet_b6 * toprint);
unsigned int packet_b6_id_of_field(packet_b6 * onpacket, char * name);
VARIANT * packet_b6_get_field_value(packet_b6 * onpacket, unsigned int id);
int packet_b6_set_field_value(packet_b6 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b7_struct packet_b7;
packet_b7 * deserialize_b7(Stream ** fromstream, unsigned short size);
unsigned short serialize_b7(Stream ** tostream, packet_b7 * toserialize);
packet_b7 * create_b7();
void destroy_b7(packet_b7 * todestroy);
void printpacket_b7(packet_b7 * toprint);
unsigned int packet_b7_id_of_field(packet_b7 * onpacket, char * name);
VARIANT * packet_b7_get_field_value(packet_b7 * onpacket, unsigned int id);
int packet_b7_set_field_value(packet_b7 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b8_struct packet_b8;
packet_b8 * deserialize_b8(Stream ** fromstream, unsigned short size);
unsigned short serialize_b8(Stream ** tostream, packet_b8 * toserialize);
packet_b8 * create_b8();
void destroy_b8(packet_b8 * todestroy);
void printpacket_b8(packet_b8 * toprint);
unsigned int packet_b8_id_of_field(packet_b8 * onpacket, char * name);
VARIANT * packet_b8_get_field_value(packet_b8 * onpacket, unsigned int id);
int packet_b8_set_field_value(packet_b8 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_b9_struct packet_b9;
packet_b9 * deserialize_b9(Stream ** fromstream, unsigned short size);
unsigned short serialize_b9(Stream ** tostream, packet_b9 * toserialize);
packet_b9 * create_b9();
void destroy_b9(packet_b9 * todestroy);
void printpacket_b9(packet_b9 * toprint);
unsigned int packet_b9_id_of_field(packet_b9 * onpacket, char * name);
VARIANT * packet_b9_get_field_value(packet_b9 * onpacket, unsigned int id);
int packet_b9_set_field_value(packet_b9 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ba_struct packet_ba;
packet_ba * deserialize_ba(Stream ** fromstream, unsigned short size);
unsigned short serialize_ba(Stream ** tostream, packet_ba * toserialize);
packet_ba * create_ba();
void destroy_ba(packet_ba * todestroy);
void printpacket_ba(packet_ba * toprint);
unsigned int packet_ba_id_of_field(packet_ba * onpacket, char * name);
VARIANT * packet_ba_get_field_value(packet_ba * onpacket, unsigned int id);
int packet_ba_set_field_value(packet_ba * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_bb_struct packet_bb;
packet_bb * deserialize_bb(Stream ** fromstream, unsigned short size);
unsigned short serialize_bb(Stream ** tostream, packet_bb * toserialize);
packet_bb * create_bb();
void destroy_bb(packet_bb * todestroy);
void printpacket_bb(packet_bb * toprint);
unsigned int packet_bb_id_of_field(packet_bb * onpacket, char * name);
VARIANT * packet_bb_get_field_value(packet_bb * onpacket, unsigned int id);
int packet_bb_set_field_value(packet_bb * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_bc_struct packet_bc;
packet_bc * deserialize_bc(Stream ** fromstream, unsigned short size);
unsigned short serialize_bc(Stream ** tostream, packet_bc * toserialize);
packet_bc * create_bc();
void destroy_bc(packet_bc * todestroy);
void printpacket_bc(packet_bc * toprint);
unsigned int packet_bc_id_of_field(packet_bc * onpacket, char * name);
VARIANT * packet_bc_get_field_value(packet_bc * onpacket, unsigned int id);
int packet_bc_set_field_value(packet_bc * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_bd_struct packet_bd;
packet_bd * deserialize_bd(Stream ** fromstream, unsigned short size);
unsigned short serialize_bd(Stream ** tostream, packet_bd * toserialize);
packet_bd * create_bd();
void destroy_bd(packet_bd * todestroy);
void printpacket_bd(packet_bd * toprint);
unsigned int packet_bd_id_of_field(packet_bd * onpacket, char * name);
VARIANT * packet_bd_get_field_value(packet_bd * onpacket, unsigned int id);
int packet_bd_set_field_value(packet_bd * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_be_struct packet_be;
packet_be * deserialize_be(Stream ** fromstream, unsigned short size);
unsigned short serialize_be(Stream ** tostream, packet_be * toserialize);
packet_be * create_be();
void destroy_be(packet_be * todestroy);
void printpacket_be(packet_be * toprint);
unsigned int packet_be_id_of_field(packet_be * onpacket, char * name);
VARIANT * packet_be_get_field_value(packet_be * onpacket, unsigned int id);
int packet_be_set_field_value(packet_be * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_bf_struct packet_bf;
packet_bf * deserialize_bf(Stream ** fromstream, unsigned short size);
unsigned short serialize_bf(Stream ** tostream, packet_bf * toserialize);
packet_bf * create_bf();
void destroy_bf(packet_bf * todestroy);
void printpacket_bf(packet_bf * toprint);
unsigned int packet_bf_id_of_field(packet_bf * onpacket, char * name);
VARIANT * packet_bf_get_field_value(packet_bf * onpacket, unsigned int id);
int packet_bf_set_field_value(packet_bf * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c0_struct packet_c0;
packet_c0 * deserialize_c0(Stream ** fromstream, unsigned short size);
unsigned short serialize_c0(Stream ** tostream, packet_c0 * toserialize);
packet_c0 * create_c0();
void destroy_c0(packet_c0 * todestroy);
void printpacket_c0(packet_c0 * toprint);
unsigned int packet_c0_id_of_field(packet_c0 * onpacket, char * name);
VARIANT * packet_c0_get_field_value(packet_c0 * onpacket, unsigned int id);
int packet_c0_set_field_value(packet_c0 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c1_struct packet_c1;
packet_c1 * deserialize_c1(Stream ** fromstream, unsigned short size);
unsigned short serialize_c1(Stream ** tostream, packet_c1 * toserialize);
packet_c1 * create_c1();
void destroy_c1(packet_c1 * todestroy);
void printpacket_c1(packet_c1 * toprint);
unsigned int packet_c1_id_of_field(packet_c1 * onpacket, char * name);
VARIANT * packet_c1_get_field_value(packet_c1 * onpacket, unsigned int id);
int packet_c1_set_field_value(packet_c1 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c2_struct packet_c2;
packet_c2 * deserialize_c2(Stream ** fromstream, unsigned short size);
unsigned short serialize_c2(Stream ** tostream, packet_c2 * toserialize);
packet_c2 * create_c2();
void destroy_c2(packet_c2 * todestroy);
void printpacket_c2(packet_c2 * toprint);
unsigned int packet_c2_id_of_field(packet_c2 * onpacket, char * name);
VARIANT * packet_c2_get_field_value(packet_c2 * onpacket, unsigned int id);
int packet_c2_set_field_value(packet_c2 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c3_struct packet_c3;
packet_c3 * deserialize_c3(Stream ** fromstream, unsigned short size);
unsigned short serialize_c3(Stream ** tostream, packet_c3 * toserialize);
packet_c3 * create_c3();
void destroy_c3(packet_c3 * todestroy);
void printpacket_c3(packet_c3 * toprint);
unsigned int packet_c3_id_of_field(packet_c3 * onpacket, char * name);
VARIANT * packet_c3_get_field_value(packet_c3 * onpacket, unsigned int id);
int packet_c3_set_field_value(packet_c3 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c4_struct packet_c4;
packet_c4 * deserialize_c4(Stream ** fromstream, unsigned short size);
unsigned short serialize_c4(Stream ** tostream, packet_c4 * toserialize);
packet_c4 * create_c4();
void destroy_c4(packet_c4 * todestroy);
void printpacket_c4(packet_c4 * toprint);
unsigned int packet_c4_id_of_field(packet_c4 * onpacket, char * name);
VARIANT * packet_c4_get_field_value(packet_c4 * onpacket, unsigned int id);
int packet_c4_set_field_value(packet_c4 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c5_struct packet_c5;
packet_c5 * deserialize_c5(Stream ** fromstream, unsigned short size);
unsigned short serialize_c5(Stream ** tostream, packet_c5 * toserialize);
packet_c5 * create_c5();
void destroy_c5(packet_c5 * todestroy);
void printpacket_c5(packet_c5 * toprint);
unsigned int packet_c5_id_of_field(packet_c5 * onpacket, char * name);
VARIANT * packet_c5_get_field_value(packet_c5 * onpacket, unsigned int id);
int packet_c5_set_field_value(packet_c5 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c6_struct packet_c6;
packet_c6 * deserialize_c6(Stream ** fromstream, unsigned short size);
unsigned short serialize_c6(Stream ** tostream, packet_c6 * toserialize);
packet_c6 * create_c6();
void destroy_c6(packet_c6 * todestroy);
void printpacket_c6(packet_c6 * toprint);
unsigned int packet_c6_id_of_field(packet_c6 * onpacket, char * name);
VARIANT * packet_c6_get_field_value(packet_c6 * onpacket, unsigned int id);
int packet_c6_set_field_value(packet_c6 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c7_struct packet_c7;
packet_c7 * deserialize_c7(Stream ** fromstream, unsigned short size);
unsigned short serialize_c7(Stream ** tostream, packet_c7 * toserialize);
packet_c7 * create_c7();
void destroy_c7(packet_c7 * todestroy);
void printpacket_c7(packet_c7 * toprint);
unsigned int packet_c7_id_of_field(packet_c7 * onpacket, char * name);
VARIANT * packet_c7_get_field_value(packet_c7 * onpacket, unsigned int id);
int packet_c7_set_field_value(packet_c7 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c8_struct packet_c8;
packet_c8 * deserialize_c8(Stream ** fromstream, unsigned short size);
unsigned short serialize_c8(Stream ** tostream, packet_c8 * toserialize);
packet_c8 * create_c8();
void destroy_c8(packet_c8 * todestroy);
void printpacket_c8(packet_c8 * toprint);
unsigned int packet_c8_id_of_field(packet_c8 * onpacket, char * name);
VARIANT * packet_c8_get_field_value(packet_c8 * onpacket, unsigned int id);
int packet_c8_set_field_value(packet_c8 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_c9_struct packet_c9;
packet_c9 * deserialize_c9(Stream ** fromstream, unsigned short size);
unsigned short serialize_c9(Stream ** tostream, packet_c9 * toserialize);
packet_c9 * create_c9();
void destroy_c9(packet_c9 * todestroy);
void printpacket_c9(packet_c9 * toprint);
unsigned int packet_c9_id_of_field(packet_c9 * onpacket, char * name);
VARIANT * packet_c9_get_field_value(packet_c9 * onpacket, unsigned int id);
int packet_c9_set_field_value(packet_c9 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ca_struct packet_ca;
packet_ca * deserialize_ca(Stream ** fromstream, unsigned short size);
unsigned short serialize_ca(Stream ** tostream, packet_ca * toserialize);
packet_ca * create_ca();
void destroy_ca(packet_ca * todestroy);
void printpacket_ca(packet_ca * toprint);
unsigned int packet_ca_id_of_field(packet_ca * onpacket, char * name);
VARIANT * packet_ca_get_field_value(packet_ca * onpacket, unsigned int id);
int packet_ca_set_field_value(packet_ca * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_cb_struct packet_cb;
packet_cb * deserialize_cb(Stream ** fromstream, unsigned short size);
unsigned short serialize_cb(Stream ** tostream, packet_cb * toserialize);
packet_cb * create_cb();
void destroy_cb(packet_cb * todestroy);
void printpacket_cb(packet_cb * toprint);
unsigned int packet_cb_id_of_field(packet_cb * onpacket, char * name);
VARIANT * packet_cb_get_field_value(packet_cb * onpacket, unsigned int id);
int packet_cb_set_field_value(packet_cb * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_cc_struct packet_cc;
packet_cc * deserialize_cc(Stream ** fromstream, unsigned short size);
unsigned short serialize_cc(Stream ** tostream, packet_cc * toserialize);
packet_cc * create_cc();
void destroy_cc(packet_cc * todestroy);
void printpacket_cc(packet_cc * toprint);
unsigned int packet_cc_id_of_field(packet_cc * onpacket, char * name);
VARIANT * packet_cc_get_field_value(packet_cc * onpacket, unsigned int id);
int packet_cc_set_field_value(packet_cc * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_cd_struct packet_cd;
packet_cd * deserialize_cd(Stream ** fromstream, unsigned short size);
unsigned short serialize_cd(Stream ** tostream, packet_cd * toserialize);
packet_cd * create_cd();
void destroy_cd(packet_cd * todestroy);
void printpacket_cd(packet_cd * toprint);
unsigned int packet_cd_id_of_field(packet_cd * onpacket, char * name);
VARIANT * packet_cd_get_field_value(packet_cd * onpacket, unsigned int id);
int packet_cd_set_field_value(packet_cd * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ce_struct packet_ce;
packet_ce * deserialize_ce(Stream ** fromstream, unsigned short size);
unsigned short serialize_ce(Stream ** tostream, packet_ce * toserialize);
packet_ce * create_ce();
void destroy_ce(packet_ce * todestroy);
void printpacket_ce(packet_ce * toprint);
unsigned int packet_ce_id_of_field(packet_ce * onpacket, char * name);
VARIANT * packet_ce_get_field_value(packet_ce * onpacket, unsigned int id);
int packet_ce_set_field_value(packet_ce * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_cf_struct packet_cf;
packet_cf * deserialize_cf(Stream ** fromstream, unsigned short size);
unsigned short serialize_cf(Stream ** tostream, packet_cf * toserialize);
packet_cf * create_cf();
void destroy_cf(packet_cf * todestroy);
void printpacket_cf(packet_cf * toprint);
unsigned int packet_cf_id_of_field(packet_cf * onpacket, char * name);
VARIANT * packet_cf_get_field_value(packet_cf * onpacket, unsigned int id);
int packet_cf_set_field_value(packet_cf * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d0_struct packet_d0;
packet_d0 * deserialize_d0(Stream ** fromstream, unsigned short size);
unsigned short serialize_d0(Stream ** tostream, packet_d0 * toserialize);
packet_d0 * create_d0();
void destroy_d0(packet_d0 * todestroy);
void printpacket_d0(packet_d0 * toprint);
unsigned int packet_d0_id_of_field(packet_d0 * onpacket, char * name);
VARIANT * packet_d0_get_field_value(packet_d0 * onpacket, unsigned int id);
int packet_d0_set_field_value(packet_d0 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d1_struct packet_d1;
packet_d1 * deserialize_d1(Stream ** fromstream, unsigned short size);
unsigned short serialize_d1(Stream ** tostream, packet_d1 * toserialize);
packet_d1 * create_d1();
void destroy_d1(packet_d1 * todestroy);
void printpacket_d1(packet_d1 * toprint);
unsigned int packet_d1_id_of_field(packet_d1 * onpacket, char * name);
VARIANT * packet_d1_get_field_value(packet_d1 * onpacket, unsigned int id);
int packet_d1_set_field_value(packet_d1 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d2_struct packet_d2;
packet_d2 * deserialize_d2(Stream ** fromstream, unsigned short size);
unsigned short serialize_d2(Stream ** tostream, packet_d2 * toserialize);
packet_d2 * create_d2();
void destroy_d2(packet_d2 * todestroy);
void printpacket_d2(packet_d2 * toprint);
unsigned int packet_d2_id_of_field(packet_d2 * onpacket, char * name);
VARIANT * packet_d2_get_field_value(packet_d2 * onpacket, unsigned int id);
int packet_d2_set_field_value(packet_d2 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d3_struct packet_d3;
packet_d3 * deserialize_d3(Stream ** fromstream, unsigned short size);
unsigned short serialize_d3(Stream ** tostream, packet_d3 * toserialize);
packet_d3 * create_d3();
void destroy_d3(packet_d3 * todestroy);
void printpacket_d3(packet_d3 * toprint);
unsigned int packet_d3_id_of_field(packet_d3 * onpacket, char * name);
VARIANT * packet_d3_get_field_value(packet_d3 * onpacket, unsigned int id);
int packet_d3_set_field_value(packet_d3 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d4_struct packet_d4;
packet_d4 * deserialize_d4(Stream ** fromstream, unsigned short size);
unsigned short serialize_d4(Stream ** tostream, packet_d4 * toserialize);
packet_d4 * create_d4();
void destroy_d4(packet_d4 * todestroy);
void printpacket_d4(packet_d4 * toprint);
unsigned int packet_d4_id_of_field(packet_d4 * onpacket, char * name);
VARIANT * packet_d4_get_field_value(packet_d4 * onpacket, unsigned int id);
int packet_d4_set_field_value(packet_d4 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d5_struct packet_d5;
packet_d5 * deserialize_d5(Stream ** fromstream, unsigned short size);
unsigned short serialize_d5(Stream ** tostream, packet_d5 * toserialize);
packet_d5 * create_d5();
void destroy_d5(packet_d5 * todestroy);
void printpacket_d5(packet_d5 * toprint);
unsigned int packet_d5_id_of_field(packet_d5 * onpacket, char * name);
VARIANT * packet_d5_get_field_value(packet_d5 * onpacket, unsigned int id);
int packet_d5_set_field_value(packet_d5 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d6_struct packet_d6;
packet_d6 * deserialize_d6(Stream ** fromstream, unsigned short size);
unsigned short serialize_d6(Stream ** tostream, packet_d6 * toserialize);
packet_d6 * create_d6();
void destroy_d6(packet_d6 * todestroy);
void printpacket_d6(packet_d6 * toprint);
unsigned int packet_d6_id_of_field(packet_d6 * onpacket, char * name);
VARIANT * packet_d6_get_field_value(packet_d6 * onpacket, unsigned int id);
int packet_d6_set_field_value(packet_d6 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d7_struct packet_d7;
packet_d7 * deserialize_d7(Stream ** fromstream, unsigned short size);
unsigned short serialize_d7(Stream ** tostream, packet_d7 * toserialize);
packet_d7 * create_d7();
void destroy_d7(packet_d7 * todestroy);
void printpacket_d7(packet_d7 * toprint);
unsigned int packet_d7_id_of_field(packet_d7 * onpacket, char * name);
VARIANT * packet_d7_get_field_value(packet_d7 * onpacket, unsigned int id);
int packet_d7_set_field_value(packet_d7 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d8_struct packet_d8;
packet_d8 * deserialize_d8(Stream ** fromstream, unsigned short size);
unsigned short serialize_d8(Stream ** tostream, packet_d8 * toserialize);
packet_d8 * create_d8();
void destroy_d8(packet_d8 * todestroy);
void printpacket_d8(packet_d8 * toprint);
unsigned int packet_d8_id_of_field(packet_d8 * onpacket, char * name);
VARIANT * packet_d8_get_field_value(packet_d8 * onpacket, unsigned int id);
int packet_d8_set_field_value(packet_d8 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_d9_struct packet_d9;
packet_d9 * deserialize_d9(Stream ** fromstream, unsigned short size);
unsigned short serialize_d9(Stream ** tostream, packet_d9 * toserialize);
packet_d9 * create_d9();
void destroy_d9(packet_d9 * todestroy);
void printpacket_d9(packet_d9 * toprint);
unsigned int packet_d9_id_of_field(packet_d9 * onpacket, char * name);
VARIANT * packet_d9_get_field_value(packet_d9 * onpacket, unsigned int id);
int packet_d9_set_field_value(packet_d9 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_da_struct packet_da;
packet_da * deserialize_da(Stream ** fromstream, unsigned short size);
unsigned short serialize_da(Stream ** tostream, packet_da * toserialize);
packet_da * create_da();
void destroy_da(packet_da * todestroy);
void printpacket_da(packet_da * toprint);
unsigned int packet_da_id_of_field(packet_da * onpacket, char * name);
VARIANT * packet_da_get_field_value(packet_da * onpacket, unsigned int id);
int packet_da_set_field_value(packet_da * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_db_struct packet_db;
packet_db * deserialize_db(Stream ** fromstream, unsigned short size);
unsigned short serialize_db(Stream ** tostream, packet_db * toserialize);
packet_db * create_db();
void destroy_db(packet_db * todestroy);
void printpacket_db(packet_db * toprint);
unsigned int packet_db_id_of_field(packet_db * onpacket, char * name);
VARIANT * packet_db_get_field_value(packet_db * onpacket, unsigned int id);
int packet_db_set_field_value(packet_db * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_dc_struct packet_dc;
packet_dc * deserialize_dc(Stream ** fromstream, unsigned short size);
unsigned short serialize_dc(Stream ** tostream, packet_dc * toserialize);
packet_dc * create_dc();
void destroy_dc(packet_dc * todestroy);
void printpacket_dc(packet_dc * toprint);
unsigned int packet_dc_id_of_field(packet_dc * onpacket, char * name);
VARIANT * packet_dc_get_field_value(packet_dc * onpacket, unsigned int id);
int packet_dc_set_field_value(packet_dc * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_dd_struct packet_dd;
packet_dd * deserialize_dd(Stream ** fromstream, unsigned short size);
unsigned short serialize_dd(Stream ** tostream, packet_dd * toserialize);
packet_dd * create_dd();
void destroy_dd(packet_dd * todestroy);
void printpacket_dd(packet_dd * toprint);
unsigned int packet_dd_id_of_field(packet_dd * onpacket, char * name);
VARIANT * packet_dd_get_field_value(packet_dd * onpacket, unsigned int id);
int packet_dd_set_field_value(packet_dd * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_de_struct packet_de;
packet_de * deserialize_de(Stream ** fromstream, unsigned short size);
unsigned short serialize_de(Stream ** tostream, packet_de * toserialize);
packet_de * create_de();
void destroy_de(packet_de * todestroy);
void printpacket_de(packet_de * toprint);
unsigned int packet_de_id_of_field(packet_de * onpacket, char * name);
VARIANT * packet_de_get_field_value(packet_de * onpacket, unsigned int id);
int packet_de_set_field_value(packet_de * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_df_struct packet_df;
packet_df * deserialize_df(Stream ** fromstream, unsigned short size);
unsigned short serialize_df(Stream ** tostream, packet_df * toserialize);
packet_df * create_df();
void destroy_df(packet_df * todestroy);
void printpacket_df(packet_df * toprint);
unsigned int packet_df_id_of_field(packet_df * onpacket, char * name);
VARIANT * packet_df_get_field_value(packet_df * onpacket, unsigned int id);
int packet_df_set_field_value(packet_df * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e0_struct packet_e0;
packet_e0 * deserialize_e0(Stream ** fromstream, unsigned short size);
unsigned short serialize_e0(Stream ** tostream, packet_e0 * toserialize);
packet_e0 * create_e0();
void destroy_e0(packet_e0 * todestroy);
void printpacket_e0(packet_e0 * toprint);
unsigned int packet_e0_id_of_field(packet_e0 * onpacket, char * name);
VARIANT * packet_e0_get_field_value(packet_e0 * onpacket, unsigned int id);
int packet_e0_set_field_value(packet_e0 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e1_struct packet_e1;
packet_e1 * deserialize_e1(Stream ** fromstream, unsigned short size);
unsigned short serialize_e1(Stream ** tostream, packet_e1 * toserialize);
packet_e1 * create_e1();
void destroy_e1(packet_e1 * todestroy);
void printpacket_e1(packet_e1 * toprint);
unsigned int packet_e1_id_of_field(packet_e1 * onpacket, char * name);
VARIANT * packet_e1_get_field_value(packet_e1 * onpacket, unsigned int id);
int packet_e1_set_field_value(packet_e1 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e2_struct packet_e2;
packet_e2 * deserialize_e2(Stream ** fromstream, unsigned short size);
unsigned short serialize_e2(Stream ** tostream, packet_e2 * toserialize);
packet_e2 * create_e2();
void destroy_e2(packet_e2 * todestroy);
void printpacket_e2(packet_e2 * toprint);
unsigned int packet_e2_id_of_field(packet_e2 * onpacket, char * name);
VARIANT * packet_e2_get_field_value(packet_e2 * onpacket, unsigned int id);
int packet_e2_set_field_value(packet_e2 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e3_struct packet_e3;
packet_e3 * deserialize_e3(Stream ** fromstream, unsigned short size);
unsigned short serialize_e3(Stream ** tostream, packet_e3 * toserialize);
packet_e3 * create_e3();
void destroy_e3(packet_e3 * todestroy);
void printpacket_e3(packet_e3 * toprint);
unsigned int packet_e3_id_of_field(packet_e3 * onpacket, char * name);
VARIANT * packet_e3_get_field_value(packet_e3 * onpacket, unsigned int id);
int packet_e3_set_field_value(packet_e3 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e4_struct packet_e4;
packet_e4 * deserialize_e4(Stream ** fromstream, unsigned short size);
unsigned short serialize_e4(Stream ** tostream, packet_e4 * toserialize);
packet_e4 * create_e4();
void destroy_e4(packet_e4 * todestroy);
void printpacket_e4(packet_e4 * toprint);
unsigned int packet_e4_id_of_field(packet_e4 * onpacket, char * name);
VARIANT * packet_e4_get_field_value(packet_e4 * onpacket, unsigned int id);
int packet_e4_set_field_value(packet_e4 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e5_struct packet_e5;
packet_e5 * deserialize_e5(Stream ** fromstream, unsigned short size);
unsigned short serialize_e5(Stream ** tostream, packet_e5 * toserialize);
packet_e5 * create_e5();
void destroy_e5(packet_e5 * todestroy);
void printpacket_e5(packet_e5 * toprint);
unsigned int packet_e5_id_of_field(packet_e5 * onpacket, char * name);
VARIANT * packet_e5_get_field_value(packet_e5 * onpacket, unsigned int id);
int packet_e5_set_field_value(packet_e5 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e6_struct packet_e6;
packet_e6 * deserialize_e6(Stream ** fromstream, unsigned short size);
unsigned short serialize_e6(Stream ** tostream, packet_e6 * toserialize);
packet_e6 * create_e6();
void destroy_e6(packet_e6 * todestroy);
void printpacket_e6(packet_e6 * toprint);
unsigned int packet_e6_id_of_field(packet_e6 * onpacket, char * name);
VARIANT * packet_e6_get_field_value(packet_e6 * onpacket, unsigned int id);
int packet_e6_set_field_value(packet_e6 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e7_struct packet_e7;
packet_e7 * deserialize_e7(Stream ** fromstream, unsigned short size);
unsigned short serialize_e7(Stream ** tostream, packet_e7 * toserialize);
packet_e7 * create_e7();
void destroy_e7(packet_e7 * todestroy);
void printpacket_e7(packet_e7 * toprint);
unsigned int packet_e7_id_of_field(packet_e7 * onpacket, char * name);
VARIANT * packet_e7_get_field_value(packet_e7 * onpacket, unsigned int id);
int packet_e7_set_field_value(packet_e7 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e8_struct packet_e8;
packet_e8 * deserialize_e8(Stream ** fromstream, unsigned short size);
unsigned short serialize_e8(Stream ** tostream, packet_e8 * toserialize);
packet_e8 * create_e8();
void destroy_e8(packet_e8 * todestroy);
void printpacket_e8(packet_e8 * toprint);
unsigned int packet_e8_id_of_field(packet_e8 * onpacket, char * name);
VARIANT * packet_e8_get_field_value(packet_e8 * onpacket, unsigned int id);
int packet_e8_set_field_value(packet_e8 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_e9_struct packet_e9;
packet_e9 * deserialize_e9(Stream ** fromstream, unsigned short size);
unsigned short serialize_e9(Stream ** tostream, packet_e9 * toserialize);
packet_e9 * create_e9();
void destroy_e9(packet_e9 * todestroy);
void printpacket_e9(packet_e9 * toprint);
unsigned int packet_e9_id_of_field(packet_e9 * onpacket, char * name);
VARIANT * packet_e9_get_field_value(packet_e9 * onpacket, unsigned int id);
int packet_e9_set_field_value(packet_e9 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ea_struct packet_ea;
packet_ea * deserialize_ea(Stream ** fromstream, unsigned short size);
unsigned short serialize_ea(Stream ** tostream, packet_ea * toserialize);
packet_ea * create_ea();
void destroy_ea(packet_ea * todestroy);
void printpacket_ea(packet_ea * toprint);
unsigned int packet_ea_id_of_field(packet_ea * onpacket, char * name);
VARIANT * packet_ea_get_field_value(packet_ea * onpacket, unsigned int id);
int packet_ea_set_field_value(packet_ea * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_eb_struct packet_eb;
packet_eb * deserialize_eb(Stream ** fromstream, unsigned short size);
unsigned short serialize_eb(Stream ** tostream, packet_eb * toserialize);
packet_eb * create_eb();
void destroy_eb(packet_eb * todestroy);
void printpacket_eb(packet_eb * toprint);
unsigned int packet_eb_id_of_field(packet_eb * onpacket, char * name);
VARIANT * packet_eb_get_field_value(packet_eb * onpacket, unsigned int id);
int packet_eb_set_field_value(packet_eb * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ec_struct packet_ec;
packet_ec * deserialize_ec(Stream ** fromstream, unsigned short size);
unsigned short serialize_ec(Stream ** tostream, packet_ec * toserialize);
packet_ec * create_ec();
void destroy_ec(packet_ec * todestroy);
void printpacket_ec(packet_ec * toprint);
unsigned int packet_ec_id_of_field(packet_ec * onpacket, char * name);
VARIANT * packet_ec_get_field_value(packet_ec * onpacket, unsigned int id);
int packet_ec_set_field_value(packet_ec * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ed_struct packet_ed;
packet_ed * deserialize_ed(Stream ** fromstream, unsigned short size);
unsigned short serialize_ed(Stream ** tostream, packet_ed * toserialize);
packet_ed * create_ed();
void destroy_ed(packet_ed * todestroy);
void printpacket_ed(packet_ed * toprint);
unsigned int packet_ed_id_of_field(packet_ed * onpacket, char * name);
VARIANT * packet_ed_get_field_value(packet_ed * onpacket, unsigned int id);
int packet_ed_set_field_value(packet_ed * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ee_struct packet_ee;
packet_ee * deserialize_ee(Stream ** fromstream, unsigned short size);
unsigned short serialize_ee(Stream ** tostream, packet_ee * toserialize);
packet_ee * create_ee();
void destroy_ee(packet_ee * todestroy);
void printpacket_ee(packet_ee * toprint);
unsigned int packet_ee_id_of_field(packet_ee * onpacket, char * name);
VARIANT * packet_ee_get_field_value(packet_ee * onpacket, unsigned int id);
int packet_ee_set_field_value(packet_ee * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ef_struct packet_ef;
packet_ef * deserialize_ef(Stream ** fromstream, unsigned short size);
unsigned short serialize_ef(Stream ** tostream, packet_ef * toserialize);
packet_ef * create_ef();
void destroy_ef(packet_ef * todestroy);
void printpacket_ef(packet_ef * toprint);
unsigned int packet_ef_id_of_field(packet_ef * onpacket, char * name);
VARIANT * packet_ef_get_field_value(packet_ef * onpacket, unsigned int id);
int packet_ef_set_field_value(packet_ef * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f0_struct packet_f0;
packet_f0 * deserialize_f0(Stream ** fromstream, unsigned short size);
unsigned short serialize_f0(Stream ** tostream, packet_f0 * toserialize);
packet_f0 * create_f0();
void destroy_f0(packet_f0 * todestroy);
void printpacket_f0(packet_f0 * toprint);
unsigned int packet_f0_id_of_field(packet_f0 * onpacket, char * name);
VARIANT * packet_f0_get_field_value(packet_f0 * onpacket, unsigned int id);
int packet_f0_set_field_value(packet_f0 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f1_struct packet_f1;
packet_f1 * deserialize_f1(Stream ** fromstream, unsigned short size);
unsigned short serialize_f1(Stream ** tostream, packet_f1 * toserialize);
packet_f1 * create_f1();
void destroy_f1(packet_f1 * todestroy);
void printpacket_f1(packet_f1 * toprint);
unsigned int packet_f1_id_of_field(packet_f1 * onpacket, char * name);
VARIANT * packet_f1_get_field_value(packet_f1 * onpacket, unsigned int id);
int packet_f1_set_field_value(packet_f1 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f2_struct packet_f2;
packet_f2 * deserialize_f2(Stream ** fromstream, unsigned short size);
unsigned short serialize_f2(Stream ** tostream, packet_f2 * toserialize);
packet_f2 * create_f2();
void destroy_f2(packet_f2 * todestroy);
void printpacket_f2(packet_f2 * toprint);
unsigned int packet_f2_id_of_field(packet_f2 * onpacket, char * name);
VARIANT * packet_f2_get_field_value(packet_f2 * onpacket, unsigned int id);
int packet_f2_set_field_value(packet_f2 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f3_struct packet_f3;
packet_f3 * deserialize_f3(Stream ** fromstream, unsigned short size);
unsigned short serialize_f3(Stream ** tostream, packet_f3 * toserialize);
packet_f3 * create_f3();
void destroy_f3(packet_f3 * todestroy);
void printpacket_f3(packet_f3 * toprint);
unsigned int packet_f3_id_of_field(packet_f3 * onpacket, char * name);
VARIANT * packet_f3_get_field_value(packet_f3 * onpacket, unsigned int id);
int packet_f3_set_field_value(packet_f3 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f4_struct packet_f4;
packet_f4 * deserialize_f4(Stream ** fromstream, unsigned short size);
unsigned short serialize_f4(Stream ** tostream, packet_f4 * toserialize);
packet_f4 * create_f4();
void destroy_f4(packet_f4 * todestroy);
void printpacket_f4(packet_f4 * toprint);
unsigned int packet_f4_id_of_field(packet_f4 * onpacket, char * name);
VARIANT * packet_f4_get_field_value(packet_f4 * onpacket, unsigned int id);
int packet_f4_set_field_value(packet_f4 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f5_struct packet_f5;
packet_f5 * deserialize_f5(Stream ** fromstream, unsigned short size);
unsigned short serialize_f5(Stream ** tostream, packet_f5 * toserialize);
packet_f5 * create_f5();
void destroy_f5(packet_f5 * todestroy);
void printpacket_f5(packet_f5 * toprint);
unsigned int packet_f5_id_of_field(packet_f5 * onpacket, char * name);
VARIANT * packet_f5_get_field_value(packet_f5 * onpacket, unsigned int id);
int packet_f5_set_field_value(packet_f5 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f6_struct packet_f6;
packet_f6 * deserialize_f6(Stream ** fromstream, unsigned short size);
unsigned short serialize_f6(Stream ** tostream, packet_f6 * toserialize);
packet_f6 * create_f6();
void destroy_f6(packet_f6 * todestroy);
void printpacket_f6(packet_f6 * toprint);
unsigned int packet_f6_id_of_field(packet_f6 * onpacket, char * name);
VARIANT * packet_f6_get_field_value(packet_f6 * onpacket, unsigned int id);
int packet_f6_set_field_value(packet_f6 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f7_struct packet_f7;
packet_f7 * deserialize_f7(Stream ** fromstream, unsigned short size);
unsigned short serialize_f7(Stream ** tostream, packet_f7 * toserialize);
packet_f7 * create_f7();
void destroy_f7(packet_f7 * todestroy);
void printpacket_f7(packet_f7 * toprint);
unsigned int packet_f7_id_of_field(packet_f7 * onpacket, char * name);
VARIANT * packet_f7_get_field_value(packet_f7 * onpacket, unsigned int id);
int packet_f7_set_field_value(packet_f7 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f8_struct packet_f8;
packet_f8 * deserialize_f8(Stream ** fromstream, unsigned short size);
unsigned short serialize_f8(Stream ** tostream, packet_f8 * toserialize);
packet_f8 * create_f8();
void destroy_f8(packet_f8 * todestroy);
void printpacket_f8(packet_f8 * toprint);
unsigned int packet_f8_id_of_field(packet_f8 * onpacket, char * name);
VARIANT * packet_f8_get_field_value(packet_f8 * onpacket, unsigned int id);
int packet_f8_set_field_value(packet_f8 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_f9_struct packet_f9;
packet_f9 * deserialize_f9(Stream ** fromstream, unsigned short size);
unsigned short serialize_f9(Stream ** tostream, packet_f9 * toserialize);
packet_f9 * create_f9();
void destroy_f9(packet_f9 * todestroy);
void printpacket_f9(packet_f9 * toprint);
unsigned int packet_f9_id_of_field(packet_f9 * onpacket, char * name);
VARIANT * packet_f9_get_field_value(packet_f9 * onpacket, unsigned int id);
int packet_f9_set_field_value(packet_f9 * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_fa_struct packet_fa;
packet_fa * deserialize_fa(Stream ** fromstream, unsigned short size);
unsigned short serialize_fa(Stream ** tostream, packet_fa * toserialize);
packet_fa * create_fa();
void destroy_fa(packet_fa * todestroy);
void printpacket_fa(packet_fa * toprint);
unsigned int packet_fa_id_of_field(packet_fa * onpacket, char * name);
VARIANT * packet_fa_get_field_value(packet_fa * onpacket, unsigned int id);
int packet_fa_set_field_value(packet_fa * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_fb_struct packet_fb;
packet_fb * deserialize_fb(Stream ** fromstream, unsigned short size);
unsigned short serialize_fb(Stream ** tostream, packet_fb * toserialize);
packet_fb * create_fb();
void destroy_fb(packet_fb * todestroy);
void printpacket_fb(packet_fb * toprint);
unsigned int packet_fb_id_of_field(packet_fb * onpacket, char * name);
VARIANT * packet_fb_get_field_value(packet_fb * onpacket, unsigned int id);
int packet_fb_set_field_value(packet_fb * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_fc_struct packet_fc;
packet_fc * deserialize_fc(Stream ** fromstream, unsigned short size);
unsigned short serialize_fc(Stream ** tostream, packet_fc * toserialize);
packet_fc * create_fc();
void destroy_fc(packet_fc * todestroy);
void printpacket_fc(packet_fc * toprint);
unsigned int packet_fc_id_of_field(packet_fc * onpacket, char * name);
VARIANT * packet_fc_get_field_value(packet_fc * onpacket, unsigned int id);
int packet_fc_set_field_value(packet_fc * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_fd_struct packet_fd;
packet_fd * deserialize_fd(Stream ** fromstream, unsigned short size);
unsigned short serialize_fd(Stream ** tostream, packet_fd * toserialize);
packet_fd * create_fd();
void destroy_fd(packet_fd * todestroy);
void printpacket_fd(packet_fd * toprint);
unsigned int packet_fd_id_of_field(packet_fd * onpacket, char * name);
VARIANT * packet_fd_get_field_value(packet_fd * onpacket, unsigned int id);
int packet_fd_set_field_value(packet_fd * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_fe_struct packet_fe;
packet_fe * deserialize_fe(Stream ** fromstream, unsigned short size);
unsigned short serialize_fe(Stream ** tostream, packet_fe * toserialize);
packet_fe * create_fe();
void destroy_fe(packet_fe * todestroy);
void printpacket_fe(packet_fe * toprint);
unsigned int packet_fe_id_of_field(packet_fe * onpacket, char * name);
VARIANT * packet_fe_get_field_value(packet_fe * onpacket, unsigned int id);
int packet_fe_set_field_value(packet_fe * onpacket, unsigned int id, VARIANT * fieldvalue);

typedef struct packet_ff_struct packet_ff;
packet_ff * deserialize_ff(Stream ** fromstream, unsigned short size);
unsigned short serialize_ff(Stream ** tostream, packet_ff * toserialize);
packet_ff * create_ff();
void destroy_ff(packet_ff * todestroy);
void printpacket_ff(packet_ff * toprint);
unsigned int packet_ff_id_of_field(packet_ff * onpacket, char * name);
VARIANT * packet_ff_get_field_value(packet_ff * onpacket, unsigned int id);
int packet_ff_set_field_value(packet_ff * onpacket, unsigned int id, VARIANT * fieldvalue);

#endif