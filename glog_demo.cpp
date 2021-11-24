#include <glog/logging.h>

int main(int argc, char* argv[]) {
    FLAGS_alsologtostderr = 1;
    FLAGS_v = 2;
    FLAGS_colorlogtostderr = true; //设置输出颜色
    google::ParseCommandLineFlags(&argc, &argv, true);

    // Initialize Google’s logging library.
    google::InitGoogleLogging(argv[0]);

    LOG(INFO) << "I am INFO!";
    LOG(WARNING) << "I am WARNING!";
	LOG(ERROR) << "I am ERROR!";

    //VLOG用来自定义日志, 可以在括号内指定log级别
    VLOG(1) << "[Custom log(VLOG)] Level 1!";
    VLOG(2) << "[Custom log(VLOG)] Level 2!";
    VLOG(3) << "[Custom log(VLOG)] Level 3!";
    VLOG(4) << "[Custom log(VLOG)] Level 4! This is used for detailed message which need not to be printed each time.";
    VLOG(5) << "[Custom log(VLOG)] Level 5! On this level messages are print as detail as possible for debugging.";

    int num_cookies = 18;
    LOG_IF(INFO, num_cookies > 10) << "Got lots of cookies";

    LOG(INFO) << "Found " << google::COUNTER << " arguments!";
    for (size_t i = 0; i < 100; i++)
    {
        LOG_EVERY_N(INFO, 10) << "Got the " << google::COUNTER << "th cookie";
        LOG_FIRST_N(INFO, 10) << "Got the " << google::COUNTER << "th cookie";
    }

    DLOG(INFO) << "D: Found cookies";
    DLOG_IF(INFO, num_cookies > 10) << "D: Got lots of cookies";
    DLOG_EVERY_N(INFO, 10) << "D: Got the " << google::COUNTER << "th cookie";

    CHECK_NE(2, 2) << ": The world must be ending!";

    LOG(FATAL) << "I am FATAL!";
}