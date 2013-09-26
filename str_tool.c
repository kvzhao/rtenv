// The hand-made string utility tool
//
void my_print(char *msg)
{
    int fdout = mq_open("/tmp/mqueue/out", 0);

    if (!msg) {
        return;
    }
    write(fdout, msg, strlen(msg) + 1);
}

