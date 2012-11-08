#define kgsl_wait_event_interruptible_timeout(wq, condition, timeout)  \
 ({                  \
   long __ret = timeout;            \
-  __wait_event_interruptible_timeout_io(wq, condition, __ret);  \ 
