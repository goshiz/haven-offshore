// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#include "messages.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

#ifdef minor
#undef minor
#endif
#include <google/protobuf/port_def.inc>
namespace hw {
namespace trezor {
namespace messages {
}  // namespace messages
}  // namespace trezor
}  // namespace hw
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_messages_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_messages_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_messages_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_messages_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_messages_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016messages.proto\022\022hw.trezor.messages\032 go"
  "ogle/protobuf/descriptor.proto*\240<\n\013Messa"
  "geType\022$\n\026MessageType_Initialize\020\000\032\010\220\265\030\001"
  "\260\265\030\001\022\032\n\020MessageType_Ping\020\001\032\004\220\265\030\001\022\035\n\023Mess"
  "ageType_Success\020\002\032\004\230\265\030\001\022\035\n\023MessageType_F"
  "ailure\020\003\032\004\230\265\030\001\022\037\n\025MessageType_ChangePin\020"
  "\004\032\004\220\265\030\001\022 \n\026MessageType_WipeDevice\020\005\032\004\220\265\030"
  "\001\022 \n\026MessageType_GetEntropy\020\t\032\004\220\265\030\001\022\035\n\023M"
  "essageType_Entropy\020\n\032\004\230\265\030\001\022 \n\026MessageTyp"
  "e_LoadDevice\020\r\032\004\220\265\030\001\022!\n\027MessageType_Rese"
  "tDevice\020\016\032\004\220\265\030\001\022\036\n\024MessageType_Features\020"
  "\021\032\004\230\265\030\001\022&\n\034MessageType_PinMatrixRequest\020"
  "\022\032\004\230\265\030\001\022*\n\030MessageType_PinMatrixAck\020\023\032\014\220"
  "\265\030\001\260\265\030\001\300\265\030\001\022 \n\022MessageType_Cancel\020\024\032\010\220\265\030"
  "\001\260\265\030\001\022\"\n\030MessageType_ClearSession\020\030\032\004\220\265\030"
  "\001\022#\n\031MessageType_ApplySettings\020\031\032\004\220\265\030\001\022#"
  "\n\031MessageType_ButtonRequest\020\032\032\004\230\265\030\001\022\'\n\025M"
  "essageType_ButtonAck\020\033\032\014\220\265\030\001\260\265\030\001\300\265\030\001\022 \n\026"
  "MessageType_ApplyFlags\020\034\032\004\220\265\030\001\022\"\n\030Messag"
  "eType_BackupDevice\020\"\032\004\220\265\030\001\022$\n\032MessageTyp"
  "e_EntropyRequest\020#\032\004\230\265\030\001\022 \n\026MessageType_"
  "EntropyAck\020$\032\004\220\265\030\001\022\'\n\035MessageType_Passph"
  "raseRequest\020)\032\004\230\265\030\001\022+\n\031MessageType_Passp"
  "hraseAck\020*\032\014\220\265\030\001\260\265\030\001\300\265\030\001\022,\n\"MessageType_"
  "PassphraseStateRequest\020M\032\004\230\265\030\001\0220\n\036Messag"
  "eType_PassphraseStateAck\020N\032\014\220\265\030\001\260\265\030\001\300\265\030\001"
  "\022$\n\032MessageType_RecoveryDevice\020-\032\004\220\265\030\001\022!"
  "\n\027MessageType_WordRequest\020.\032\004\230\265\030\001\022\035\n\023Mes"
  "sageType_WordAck\020/\032\004\220\265\030\001\022!\n\027MessageType_"
  "GetFeatures\0207\032\004\220\265\030\001\022#\n\031MessageType_SetU2"
  "FCounter\020\?\032\004\220\265\030\001\022\'\n\031MessageType_Firmware"
  "Erase\020\006\032\010\220\265\030\001\270\265\030\001\022(\n\032MessageType_Firmwar"
  "eUpload\020\007\032\010\220\265\030\001\270\265\030\001\022)\n\033MessageType_Firmw"
  "areRequest\020\010\032\010\230\265\030\001\270\265\030\001\022\"\n\024MessageType_Se"
  "lfTest\020 \032\010\220\265\030\001\270\265\030\001\022\"\n\030MessageType_GetPub"
  "licKey\020\013\032\004\220\265\030\001\022\037\n\025MessageType_PublicKey\020"
  "\014\032\004\230\265\030\001\022\034\n\022MessageType_SignTx\020\017\032\004\220\265\030\001\022\037\n"
  "\025MessageType_TxRequest\020\025\032\004\230\265\030\001\022\033\n\021Messag"
  "eType_TxAck\020\026\032\004\220\265\030\001\022 \n\026MessageType_GetAd"
  "dress\020\035\032\004\220\265\030\001\022\035\n\023MessageType_Address\020\036\032\004"
  "\230\265\030\001\022!\n\027MessageType_SignMessage\020&\032\004\220\265\030\001\022"
  "#\n\031MessageType_VerifyMessage\020\'\032\004\220\265\030\001\022&\n\034"
  "MessageType_MessageSignature\020(\032\004\230\265\030\001\022$\n\032"
  "MessageType_CipherKeyValue\020\027\032\004\220\265\030\001\022&\n\034Me"
  "ssageType_CipheredKeyValue\0200\032\004\230\265\030\001\022\"\n\030Me"
  "ssageType_SignIdentity\0205\032\004\220\265\030\001\022$\n\032Messag"
  "eType_SignedIdentity\0206\032\004\230\265\030\001\022\'\n\035MessageT"
  "ype_GetECDHSessionKey\020=\032\004\220\265\030\001\022$\n\032Message"
  "Type_ECDHSessionKey\020>\032\004\230\265\030\001\022 \n\026MessageTy"
  "pe_CosiCommit\020G\032\004\220\265\030\001\022$\n\032MessageType_Cos"
  "iCommitment\020H\032\004\230\265\030\001\022\036\n\024MessageType_CosiS"
  "ign\020I\032\004\220\265\030\001\022#\n\031MessageType_CosiSignature"
  "\020J\032\004\230\265\030\001\022/\n\035MessageType_DebugLinkDecisio"
  "n\020d\032\014\240\265\030\001\260\265\030\001\300\265\030\001\022+\n\035MessageType_DebugLi"
  "nkGetState\020e\032\010\240\265\030\001\260\265\030\001\022$\n\032MessageType_De"
  "bugLinkState\020f\032\004\250\265\030\001\022#\n\031MessageType_Debu"
  "gLinkStop\020g\032\004\240\265\030\001\022\"\n\030MessageType_DebugLi"
  "nkLog\020h\032\004\250\265\030\001\022)\n\037MessageType_DebugLinkMe"
  "moryRead\020n\032\004\240\265\030\001\022%\n\033MessageType_DebugLin"
  "kMemory\020o\032\004\250\265\030\001\022*\n MessageType_DebugLink"
  "MemoryWrite\020p\032\004\240\265\030\001\022)\n\037MessageType_Debug"
  "LinkFlashErase\020q\032\004\240\265\030\001\022+\n MessageType_Et"
  "hereumGetPublicKey\020\302\003\032\004\220\265\030\001\022(\n\035MessageTy"
  "pe_EthereumPublicKey\020\303\003\032\004\230\265\030\001\022(\n\036Message"
  "Type_EthereumGetAddress\0208\032\004\220\265\030\001\022%\n\033Messa"
  "geType_EthereumAddress\0209\032\004\230\265\030\001\022$\n\032Messag"
  "eType_EthereumSignTx\020:\032\004\220\265\030\001\022\'\n\035MessageT"
  "ype_EthereumTxRequest\020;\032\004\230\265\030\001\022#\n\031Message"
  "Type_EthereumTxAck\020<\032\004\220\265\030\001\022)\n\037MessageTyp"
  "e_EthereumSignMessage\020@\032\004\220\265\030\001\022+\n!Message"
  "Type_EthereumVerifyMessage\020A\032\004\220\265\030\001\022.\n$Me"
  "ssageType_EthereumMessageSignature\020B\032\004\230\265"
  "\030\001\022#\n\031MessageType_NEMGetAddress\020C\032\004\220\265\030\001\022"
  " \n\026MessageType_NEMAddress\020D\032\004\230\265\030\001\022\037\n\025Mes"
  "sageType_NEMSignTx\020E\032\004\220\265\030\001\022!\n\027MessageTyp"
  "e_NEMSignedTx\020F\032\004\230\265\030\001\022\'\n\035MessageType_NEM"
  "DecryptMessage\020K\032\004\220\265\030\001\022)\n\037MessageType_NE"
  "MDecryptedMessage\020L\032\004\230\265\030\001\022$\n\032MessageType"
  "_LiskGetAddress\020r\032\004\220\265\030\001\022!\n\027MessageType_L"
  "iskAddress\020s\032\004\230\265\030\001\022 \n\026MessageType_LiskSi"
  "gnTx\020t\032\004\220\265\030\001\022\"\n\030MessageType_LiskSignedTx"
  "\020u\032\004\230\265\030\001\022%\n\033MessageType_LiskSignMessage\020"
  "v\032\004\220\265\030\001\022*\n MessageType_LiskMessageSignat"
  "ure\020w\032\004\230\265\030\001\022\'\n\035MessageType_LiskVerifyMes"
  "sage\020x\032\004\220\265\030\001\022&\n\034MessageType_LiskGetPubli"
  "cKey\020y\032\004\220\265\030\001\022#\n\031MessageType_LiskPublicKe"
  "y\020z\032\004\230\265\030\001\022&\n\033MessageType_TezosGetAddress"
  "\020\226\001\032\004\220\265\030\001\022#\n\030MessageType_TezosAddress\020\227\001"
  "\032\004\230\265\030\001\022\"\n\027MessageType_TezosSignTx\020\230\001\032\004\220\265"
  "\030\001\022$\n\031MessageType_TezosSignedTx\020\231\001\032\004\230\265\030\001"
  "\022(\n\035MessageType_TezosGetPublicKey\020\232\001\032\004\220\265"
  "\030\001\022%\n\032MessageType_TezosPublicKey\020\233\001\032\004\230\265\030"
  "\001\022$\n\031MessageType_StellarSignTx\020\312\001\032\004\220\265\030\001\022"
  ")\n\036MessageType_StellarTxOpRequest\020\313\001\032\004\230\265"
  "\030\001\022(\n\035MessageType_StellarGetAddress\020\317\001\032\004"
  "\220\265\030\001\022%\n\032MessageType_StellarAddress\020\320\001\032\004\230"
  "\265\030\001\022-\n\"MessageType_StellarCreateAccountO"
  "p\020\322\001\032\004\220\265\030\001\022\'\n\034MessageType_StellarPayment"
  "Op\020\323\001\032\004\220\265\030\001\022+\n MessageType_StellarPathPa"
  "ymentOp\020\324\001\032\004\220\265\030\001\022+\n MessageType_StellarM"
  "anageOfferOp\020\325\001\032\004\220\265\030\001\0222\n\'MessageType_Ste"
  "llarCreatePassiveOfferOp\020\326\001\032\004\220\265\030\001\022*\n\037Mes"
  "sageType_StellarSetOptionsOp\020\327\001\032\004\220\265\030\001\022+\n"
  " MessageType_StellarChangeTrustOp\020\330\001\032\004\220\265"
  "\030\001\022*\n\037MessageType_StellarAllowTrustOp\020\331\001"
  "\032\004\220\265\030\001\022,\n!MessageType_StellarAccountMerg"
  "eOp\020\332\001\032\004\220\265\030\001\022*\n\037MessageType_StellarManag"
  "eDataOp\020\334\001\032\004\220\265\030\001\022,\n!MessageType_StellarB"
  "umpSequenceOp\020\335\001\032\004\220\265\030\001\022&\n\033MessageType_St"
  "ellarSignedTx\020\346\001\032\004\230\265\030\001\022%\n\032MessageType_Tr"
  "onGetAddress\020\372\001\032\004\220\265\030\001\022\"\n\027MessageType_Tro"
  "nAddress\020\373\001\032\004\230\265\030\001\022!\n\026MessageType_TronSig"
  "nTx\020\374\001\032\004\220\265\030\001\022#\n\030MessageType_TronSignedTx"
  "\020\375\001\032\004\230\265\030\001\022$\n\031MessageType_CardanoSignTx\020\257"
  "\002\032\004\220\265\030\001\022\'\n\034MessageType_CardanoTxRequest\020"
  "\260\002\032\004\230\265\030\001\022*\n\037MessageType_CardanoGetPublic"
  "Key\020\261\002\032\004\220\265\030\001\022\'\n\034MessageType_CardanoPubli"
  "cKey\020\262\002\032\004\230\265\030\001\022(\n\035MessageType_CardanoGetA"
  "ddress\020\263\002\032\004\220\265\030\001\022%\n\032MessageType_CardanoAd"
  "dress\020\264\002\032\004\230\265\030\001\022#\n\030MessageType_CardanoTxA"
  "ck\020\265\002\032\004\220\265\030\001\022&\n\033MessageType_CardanoSigned"
  "Tx\020\266\002\032\004\230\265\030\001\022)\n\036MessageType_OntologyGetAd"
  "dress\020\336\002\032\004\220\265\030\001\022&\n\033MessageType_OntologyAd"
  "dress\020\337\002\032\004\230\265\030\001\022+\n MessageType_OntologyGe"
  "tPublicKey\020\340\002\032\004\220\265\030\001\022(\n\035MessageType_Ontol"
  "ogyPublicKey\020\341\002\032\004\230\265\030\001\022+\n MessageType_Ont"
  "ologySignTransfer\020\342\002\032\004\220\265\030\001\022-\n\"MessageTyp"
  "e_OntologySignedTransfer\020\343\002\032\004\230\265\030\001\022.\n#Mes"
  "sageType_OntologySignWithdrawOng\020\344\002\032\004\220\265\030"
  "\001\0220\n%MessageType_OntologySignedWithdrawO"
  "ng\020\345\002\032\004\230\265\030\001\0220\n%MessageType_OntologySignO"
  "ntIdRegister\020\346\002\032\004\220\265\030\001\0222\n\'MessageType_Ont"
  "ologySignedOntIdRegister\020\347\002\032\004\230\265\030\001\0225\n*Mes"
  "sageType_OntologySignOntIdAddAttributes\020"
  "\350\002\032\004\220\265\030\001\0227\n,MessageType_OntologySignedOn"
  "tIdAddAttributes\020\351\002\032\004\230\265\030\001\022\'\n\034MessageType"
  "_RippleGetAddress\020\220\003\032\004\220\265\030\001\022$\n\031MessageTyp"
  "e_RippleAddress\020\221\003\032\004\230\265\030\001\022#\n\030MessageType_"
  "RippleSignTx\020\222\003\032\004\220\265\030\001\022%\n\032MessageType_Rip"
  "pleSignedTx\020\223\003\032\004\220\265\030\001\0223\n(MessageType_Mone"
  "roTransactionInitRequest\020\365\003\032\004\230\265\030\001\022/\n$Mes"
  "sageType_MoneroTransactionInitAck\020\366\003\032\004\230\265"
  "\030\001\0227\n,MessageType_MoneroTransactionSetIn"
  "putRequest\020\367\003\032\004\230\265\030\001\0223\n(MessageType_Moner"
  "oTransactionSetInputAck\020\370\003\032\004\230\265\030\001\022@\n5Mess"
  "ageType_MoneroTransactionInputsPermutati"
  "onRequest\020\371\003\032\004\230\265\030\001\022<\n1MessageType_Monero"
  "TransactionInputsPermutationAck\020\372\003\032\004\230\265\030\001"
  "\0228\n-MessageType_MoneroTransactionInputVi"
  "niRequest\020\373\003\032\004\230\265\030\001\0224\n)MessageType_Monero"
  "TransactionInputViniAck\020\374\003\032\004\230\265\030\001\022;\n0Mess"
  "ageType_MoneroTransactionAllInputsSetReq"
  "uest\020\375\003\032\004\230\265\030\001\0227\n,MessageType_MoneroTrans"
  "actionAllInputsSetAck\020\376\003\032\004\230\265\030\001\0228\n-Messag"
  "eType_MoneroTransactionSetOutputRequest\020"
  "\377\003\032\004\230\265\030\001\0224\n)MessageType_MoneroTransactio"
  "nSetOutputAck\020\200\004\032\004\230\265\030\001\0228\n-MessageType_Mo"
  "neroTransactionAllOutSetRequest\020\201\004\032\004\230\265\030\001"
  "\0224\n)MessageType_MoneroTransactionAllOutS"
  "etAck\020\202\004\032\004\230\265\030\001\0228\n-MessageType_MoneroTran"
  "sactionSignInputRequest\020\203\004\032\004\230\265\030\001\0224\n)Mess"
  "ageType_MoneroTransactionSignInputAck\020\204\004"
  "\032\004\230\265\030\001\0224\n)MessageType_MoneroTransactionF"
  "inalRequest\020\205\004\032\004\230\265\030\001\0220\n%MessageType_Mone"
  "roTransactionFinalAck\020\206\004\032\004\230\265\030\001\0226\n+Messag"
  "eType_MoneroKeyImageExportInitRequest\020\222\004"
  "\032\004\230\265\030\001\0222\n\'MessageType_MoneroKeyImageExpo"
  "rtInitAck\020\223\004\032\004\230\265\030\001\0224\n)MessageType_Monero"
  "KeyImageSyncStepRequest\020\224\004\032\004\230\265\030\001\0220\n%Mess"
  "ageType_MoneroKeyImageSyncStepAck\020\225\004\032\004\230\265"
  "\030\001\0225\n*MessageType_MoneroKeyImageSyncFina"
  "lRequest\020\226\004\032\004\230\265\030\001\0221\n&MessageType_MoneroK"
  "eyImageSyncFinalAck\020\227\004\032\004\230\265\030\001\022\'\n\034MessageT"
  "ype_MoneroGetAddress\020\234\004\032\004\220\265\030\001\022$\n\031Message"
  "Type_MoneroAddress\020\235\004\032\004\230\265\030\001\022(\n\035MessageTy"
  "pe_MoneroGetWatchKey\020\236\004\032\004\220\265\030\001\022%\n\032Message"
  "Type_MoneroWatchKey\020\237\004\032\004\230\265\030\001\022-\n\"MessageT"
  "ype_DebugMoneroDiagRequest\020\242\004\032\004\220\265\030\001\022)\n\036M"
  "essageType_DebugMoneroDiagAck\020\243\004\032\004\230\265\030\001\022,"
  "\n!MessageType_MoneroGetTxKeyRequest\020\246\004\032\004"
  "\220\265\030\001\022(\n\035MessageType_MoneroGetTxKeyAck\020\247\004"
  "\032\004\230\265\030\001\0224\n)MessageType_MoneroLiveRefreshS"
  "tartRequest\020\250\004\032\004\220\265\030\001\0220\n%MessageType_Mone"
  "roLiveRefreshStartAck\020\251\004\032\004\230\265\030\001\0223\n(Messag"
  "eType_MoneroLiveRefreshStepRequest\020\252\004\032\004\220"
  "\265\030\001\022/\n$MessageType_MoneroLiveRefreshStep"
  "Ack\020\253\004\032\004\230\265\030\001\0224\n)MessageType_MoneroLiveRe"
  "freshFinalRequest\020\254\004\032\004\220\265\030\001\0220\n%MessageTyp"
  "e_MoneroLiveRefreshFinalAck\020\255\004\032\004\230\265\030\001\022&\n\033"
  "MessageType_EosGetPublicKey\020\330\004\032\004\220\265\030\001\022#\n\030"
  "MessageType_EosPublicKey\020\331\004\032\004\230\265\030\001\022 \n\025Mes"
  "sageType_EosSignTx\020\332\004\032\004\220\265\030\001\022)\n\036MessageTy"
  "pe_EosTxActionRequest\020\333\004\032\004\230\265\030\001\022%\n\032Messag"
  "eType_EosTxActionAck\020\334\004\032\004\220\265\030\001\022\"\n\027Message"
  "Type_EosSignedTx\020\335\004\032\004\230\265\030\001:4\n\007wire_in\022!.g"
  "oogle.protobuf.EnumValueOptions\030\322\206\003 \001(\010:"
  "5\n\010wire_out\022!.google.protobuf.EnumValueO"
  "ptions\030\323\206\003 \001(\010::\n\rwire_debug_in\022!.google"
  ".protobuf.EnumValueOptions\030\324\206\003 \001(\010:;\n\016wi"
  "re_debug_out\022!.google.protobuf.EnumValue"
  "Options\030\325\206\003 \001(\010:6\n\twire_tiny\022!.google.pr"
  "otobuf.EnumValueOptions\030\326\206\003 \001(\010:<\n\017wire_"
  "bootloader\022!.google.protobuf.EnumValueOp"
  "tions\030\327\206\003 \001(\010:8\n\013wire_no_fsm\022!.google.pr"
  "otobuf.EnumValueOptions\030\330\206\003 \001(\010B4\n#com.s"
  "atoshilabs.trezor.lib.protobufB\rTrezorMe"
  "ssage"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_messages_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_messages_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_messages_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_2eproto = {
  false, false, descriptor_table_protodef_messages_2eproto, "messages.proto", 8245,
  &descriptor_table_messages_2eproto_once, descriptor_table_messages_2eproto_sccs, descriptor_table_messages_2eproto_deps, 0, 1,
  schemas, file_default_instances, TableStruct_messages_2eproto::offsets,
  file_level_metadata_messages_2eproto, 0, file_level_enum_descriptors_messages_2eproto, file_level_service_descriptors_messages_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_messages_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_messages_2eproto)), true);
namespace hw {
namespace trezor {
namespace messages {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MessageType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_messages_2eproto);
  return file_level_enum_descriptors_messages_2eproto[0];
}
bool MessageType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 32:
    case 34:
    case 35:
    case 36:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 45:
    case 46:
    case 47:
    case 48:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 202:
    case 203:
    case 207:
    case 208:
    case 210:
    case 211:
    case 212:
    case 213:
    case 214:
    case 215:
    case 216:
    case 217:
    case 218:
    case 220:
    case 221:
    case 230:
    case 250:
    case 251:
    case 252:
    case 253:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 350:
    case 351:
    case 352:
    case 353:
    case 354:
    case 355:
    case 356:
    case 357:
    case 358:
    case 359:
    case 360:
    case 361:
    case 400:
    case 401:
    case 402:
    case 403:
    case 450:
    case 451:
    case 501:
    case 502:
    case 503:
    case 504:
    case 505:
    case 506:
    case 507:
    case 508:
    case 509:
    case 510:
    case 511:
    case 512:
    case 513:
    case 514:
    case 515:
    case 516:
    case 517:
    case 518:
    case 530:
    case 531:
    case 532:
    case 533:
    case 534:
    case 535:
    case 540:
    case 541:
    case 542:
    case 543:
    case 546:
    case 547:
    case 550:
    case 551:
    case 552:
    case 553:
    case 554:
    case 555:
    case 556:
    case 557:
    case 600:
    case 601:
    case 602:
    case 603:
    case 604:
    case 605:
      return true;
    default:
      return false;
  }
}

::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_in(kWireInFieldNumber, false);
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_out(kWireOutFieldNumber, false);
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_debug_in(kWireDebugInFieldNumber, false);
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_debug_out(kWireDebugOutFieldNumber, false);
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_tiny(kWireTinyFieldNumber, false);
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_bootloader(kWireBootloaderFieldNumber, false);
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_no_fsm(kWireNoFsmFieldNumber, false);

// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace trezor
}  // namespace hw
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
