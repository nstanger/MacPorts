--- src/native/unix/native/java.c.orig
+++ src/native/unix/native/java.c
@@ -197,7 +197,7 @@
         }
     }
     if (stat(appf, &sb)) {
-        if (replace(appf, 1024, "$JAVA_HOME/../Libraries/libverify.dylib",
+        if (replace(appf, 1024, "$JAVA_HOME/jre/lib/libverify.dylib",
                     "$JAVA_HOME", data->path) != 0) {
             log_error("Cannot replace values in loader library");
             return false;
