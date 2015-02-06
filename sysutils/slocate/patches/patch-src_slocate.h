$NetBSD$

--- src/slocate.h.orig	Wed Mar  8 04:40:11 2006
+++ src/slocate.h
@@ -47,6 +47,9 @@
 # define DEFAULT_DB_DIR "/var/lib/slocate/"
 #endif
 
+# define DEFAULT_DB "/usr/pkg/var/slocate/slocate.db"
+# define DEFAULT_DB_DIR "/usr/pkg/var/slocate/"
+
 #define DB_UID 0
 #define DB_GROUP "slocate"
 #define DB_MODE 00640
