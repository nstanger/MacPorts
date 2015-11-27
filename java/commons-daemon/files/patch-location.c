--- src/native/unix/native/location.c.orig
+++ src/native/unix/native/location.c
@@ -73,6 +73,7 @@
  */
 char *location_jvm_default[] = {
 #if defined(OS_DARWIN)
+    "$JAVA_HOME/jre/lib/server/libjvm.dylib",
     "$JAVA_HOME/../Libraries/libjvm.dylib",
 #elif defined(OS_CYGWIN)
     "$JAVA_HOME/jre/bin/classic/jvm.dll",               /* Sun JDK 1.3 */
@@ -131,6 +132,7 @@
  */
 char *location_jvm_configured[] = {
 #if defined(OS_DARWIN)
+    "$JAVA_HOME/jre/lib/$VM_NAME/libjvm.dylib",
     "$JAVA_HOME/../Libraries/lib$VM_NAME.dylib",
 #elif defined(OS_CYGWIN)
     "$JAVA_HOME/jre/bin/$VM_NAME/jvm.dll",              /* Sun JDK 1.3 */
