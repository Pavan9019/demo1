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
        echo "This is Test stage"
        sh 'sleep 5; exit 1'  // This will fail the build
      }
    }

    stage('Parallel Deployment') {
      parallel {
        stage('Deploy to Server 1') {
          steps {
            echo 'Deploying to Server 1'
            sh 'sleep 5'
          }
        }
        stage('Deploy to Server 2') {
          steps {
            echo 'Deploying to Server 2'
            sh 'sleep 5'
          }
        }
      }
    }
  }
}

