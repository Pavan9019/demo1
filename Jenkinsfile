pipeline {
  agent any
  stages {
    stage('BUILD') {
      steps {
        echo "This is Build stage"
        sh '''
          sleep 5
          exit 0
        '''
      }
    }
    stage('TEST') {
      steps {
        script {
          def testStatus = sh(script: 'sleep 5; exit 1', returnStatus: true)
          if (testStatus != 0) {
            echo "Test stage failed but continuing..."
          }
        }
      }
    }
    stage('DEPLOY') {
      steps {
        echo "This is Deploy stage"
        sh 'sleep 5'
      }
    }
  }
}

