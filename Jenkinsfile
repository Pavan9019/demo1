pipeline {
  agent none
  stages {
    stage('Build') {
      agent { label 'server2-agent' }
      steps {
        echo "Build stage on server2-agent"
        sh 'sleep 5'
      }
    }
    stage('Test') {
      agent { label 'some-other-agent' }
      steps {
        echo "Test stage on some-other-agent"
        sh 'sleep 5'
      }
    }
  }
}

