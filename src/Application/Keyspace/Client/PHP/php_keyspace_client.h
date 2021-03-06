/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.31
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

/*
  +----------------------------------------------------------------------+
  | PHP version 4.0                                                      |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997, 1998, 1999, 2000, 2001 The PHP Group             |
  +----------------------------------------------------------------------+
  | This source file is subject to version 2.02 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available at through the world-wide-web at                           |
  | http://www.php.net/license/2_02.txt.                                 |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Authors:                                                             |
  |                                                                      |
  +----------------------------------------------------------------------+
 */


#ifndef PHP_KEYSPACE_CLIENT_H
#define PHP_KEYSPACE_CLIENT_H

extern zend_module_entry keyspace_client_module_entry;
#define phpext_keyspace_client_ptr &keyspace_client_module_entry

#ifdef PHP_WIN32
# define PHP_KEYSPACE_CLIENT_API __declspec(dllexport)
#else
# define PHP_KEYSPACE_CLIENT_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(keyspace_client);
PHP_MSHUTDOWN_FUNCTION(keyspace_client);
PHP_RINIT_FUNCTION(keyspace_client);
PHP_RSHUTDOWN_FUNCTION(keyspace_client);
PHP_MINFO_FUNCTION(keyspace_client);

ZEND_NAMED_FUNCTION(_wrap_imaxdiv_t_quot_set);
ZEND_NAMED_FUNCTION(_wrap_imaxdiv_t_quot_get);
ZEND_NAMED_FUNCTION(_wrap_imaxdiv_t_rem_set);
ZEND_NAMED_FUNCTION(_wrap_imaxdiv_t_rem_get);
ZEND_NAMED_FUNCTION(_wrap_new_imaxdiv_t);
ZEND_NAMED_FUNCTION(_wrap_imaxabs);
ZEND_NAMED_FUNCTION(_wrap_imaxdiv);
ZEND_NAMED_FUNCTION(_wrap_strtoimax);
ZEND_NAMED_FUNCTION(_wrap_strtoumax);
ZEND_NAMED_FUNCTION(_wrap_new_Keyspace_NodeParams);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_NodeParams_Close);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_NodeParams_AddNode);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_NodeParams_nodec_set);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_NodeParams_nodec_get);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_NodeParams_nodes_set);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_NodeParams_nodes_get);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_NodeParams_num_set);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_NodeParams_num_get);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ResultBegin);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ResultNext);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ResultIsEnd);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ResultClose);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ResultKey);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ResultValue);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ResultTransportStatus);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ResultConnectivityStatus);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ResultTimeoutStatus);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ResultCommandStatus);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Create);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Init);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Destroy);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_GetResult);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_SetGlobalTimeout);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_SetMasterTimeout);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_GetGlobalTimeout);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_GetMasterTimeout);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_GetMaster);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_DistributeDirty);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Get);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_DirtyGet);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Count);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_CountStr);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_DirtyCount);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_DirtyCountStr);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ListKeys);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ListKeysStr);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_DirtyListKeys);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_DirtyListKeysStr);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ListKeyValues);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_ListKeyValuesStr);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_DirtyListKeyValues);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_DirtyListKeyValuesStr);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Set);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_TestAndSet);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Add);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_AddStr);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Delete);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Remove);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Rename);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Prune);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Begin);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Submit);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_Cancel);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_IsBatched);
ZEND_NAMED_FUNCTION(_wrap_Keyspace_SetTrace);
#endif /* PHP_KEYSPACE_CLIENT_H */
